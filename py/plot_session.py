# coding: utf-8
import sim_data_transf_pb2 as pb
import numpy as np
import matplotlib.pyplot as plt
from collections import Counter

sims = range(3)
conditions = ["500-sqrt2", "1000-1", "100-sqrt10",
              "200-sqrt10", "100-5", "100-10", "10000-1"]

freqs = {}
figs = {}

for cond in conditions:
    #figs[cond] = plt.figure()
    #axs = [plt.subplot2grid((1, len(sims)), (0, x)) for x in range(3)]
    freqs[cond] = np.zeros((3, 30))
    for sim in sims[1:]:
        f = open("../bin/{}_{}.dat".format(cond, sim), "rb")
        dump = pb.Data_dump()
        dump.ParseFromString(f.read())
        data = Counter([x.saddle_id for x in dump.saddle_t_and_id])
        freqs[cond][sim] = np.array(zip(*sorted(data.items()))[1]) / 10000.0
       # axs[sim].bar(range(freqs[cond][sim].size), freqs[cond][sim])
        #axs[sim].axis([0, 30, 0, 0.06])


avgs = {}

for cond in conditions:
    avgs[cond] = np.mean(freqs[cond], axis=0)

for cond1 in conditions:
    for cond2 in conditions:
        print "{0:.4f}\t".format(np.linalg.norm(avgs[cond1] - avgs[cond2])),
    print "\n"

# 0.0000	0.0086	0.0050	0.0175	0.0212	0.0389	0.0388

# 0.0086	0.0000	0.0109	0.0136	0.0142	0.0321	0.0319

# 0.0050	0.0109	0.0000	0.0161	0.0216	0.0387	0.0388

# 0.0175	0.0136	0.0161	0.0000	0.0108	0.0242	0.0243

# 0.0212	0.0142	0.0216	0.0108	0.0000	0.0189	0.0186

# 0.0389	0.0321	0.0387	0.0242	0.0189	0.0000	0.0067

# 0.0388	0.0319	0.0388	0.0243	0.0186	0.0067	0.0000
