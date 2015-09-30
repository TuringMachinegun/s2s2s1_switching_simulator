// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sim_data_transf.proto

#ifndef PROTOBUF_sim_5fdata_5ftransf_2eproto__INCLUDED
#define PROTOBUF_sim_5fdata_5ftransf_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace data_transf {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_sim_5fdata_5ftransf_2eproto();
void protobuf_AssignDesc_sim_5fdata_5ftransf_2eproto();
void protobuf_ShutdownFile_sim_5fdata_5ftransf_2eproto();

class Data_dump;
class Oscillator;
class Saddle_t_and_id;

// ===================================================================

class Data_dump : public ::google::protobuf::Message {
 public:
  Data_dump();
  virtual ~Data_dump();

  Data_dump(const Data_dump& from);

  inline Data_dump& operator=(const Data_dump& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Data_dump& default_instance();

  void Swap(Data_dump* other);

  // implements Message ----------------------------------------------

  Data_dump* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Data_dump& from);
  void MergeFrom(const Data_dump& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .data_transf.Oscillator oscillator = 1;
  inline int oscillator_size() const;
  inline void clear_oscillator();
  static const int kOscillatorFieldNumber = 1;
  inline const ::data_transf::Oscillator& oscillator(int index) const;
  inline ::data_transf::Oscillator* mutable_oscillator(int index);
  inline ::data_transf::Oscillator* add_oscillator();
  inline const ::google::protobuf::RepeatedPtrField< ::data_transf::Oscillator >&
      oscillator() const;
  inline ::google::protobuf::RepeatedPtrField< ::data_transf::Oscillator >*
      mutable_oscillator();

  // repeated .data_transf.Saddle_t_and_id saddle_t_and_id = 2;
  inline int saddle_t_and_id_size() const;
  inline void clear_saddle_t_and_id();
  static const int kSaddleTAndIdFieldNumber = 2;
  inline const ::data_transf::Saddle_t_and_id& saddle_t_and_id(int index) const;
  inline ::data_transf::Saddle_t_and_id* mutable_saddle_t_and_id(int index);
  inline ::data_transf::Saddle_t_and_id* add_saddle_t_and_id();
  inline const ::google::protobuf::RepeatedPtrField< ::data_transf::Saddle_t_and_id >&
      saddle_t_and_id() const;
  inline ::google::protobuf::RepeatedPtrField< ::data_transf::Saddle_t_and_id >*
      mutable_saddle_t_and_id();

  // @@protoc_insertion_point(class_scope:data_transf.Data_dump)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::data_transf::Oscillator > oscillator_;
  ::google::protobuf::RepeatedPtrField< ::data_transf::Saddle_t_and_id > saddle_t_and_id_;
  friend void  protobuf_AddDesc_sim_5fdata_5ftransf_2eproto();
  friend void protobuf_AssignDesc_sim_5fdata_5ftransf_2eproto();
  friend void protobuf_ShutdownFile_sim_5fdata_5ftransf_2eproto();

  void InitAsDefaultInstance();
  static Data_dump* default_instance_;
};
// -------------------------------------------------------------------

class Oscillator : public ::google::protobuf::Message {
 public:
  Oscillator();
  virtual ~Oscillator();

  Oscillator(const Oscillator& from);

  inline Oscillator& operator=(const Oscillator& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Oscillator& default_instance();

  void Swap(Oscillator* other);

  // implements Message ----------------------------------------------

  Oscillator* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Oscillator& from);
  void MergeFrom(const Oscillator& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated double reset_t = 1 [packed = true];
  inline int reset_t_size() const;
  inline void clear_reset_t();
  static const int kResetTFieldNumber = 1;
  inline double reset_t(int index) const;
  inline void set_reset_t(int index, double value);
  inline void add_reset_t(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      reset_t() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_reset_t();

  // @@protoc_insertion_point(class_scope:data_transf.Oscillator)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< double > reset_t_;
  mutable int _reset_t_cached_byte_size_;
  friend void  protobuf_AddDesc_sim_5fdata_5ftransf_2eproto();
  friend void protobuf_AssignDesc_sim_5fdata_5ftransf_2eproto();
  friend void protobuf_ShutdownFile_sim_5fdata_5ftransf_2eproto();

  void InitAsDefaultInstance();
  static Oscillator* default_instance_;
};
// -------------------------------------------------------------------

class Saddle_t_and_id : public ::google::protobuf::Message {
 public:
  Saddle_t_and_id();
  virtual ~Saddle_t_and_id();

  Saddle_t_and_id(const Saddle_t_and_id& from);

  inline Saddle_t_and_id& operator=(const Saddle_t_and_id& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Saddle_t_and_id& default_instance();

  void Swap(Saddle_t_and_id* other);

  // implements Message ----------------------------------------------

  Saddle_t_and_id* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Saddle_t_and_id& from);
  void MergeFrom(const Saddle_t_and_id& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string saddle_id = 1;
  inline bool has_saddle_id() const;
  inline void clear_saddle_id();
  static const int kSaddleIdFieldNumber = 1;
  inline const ::std::string& saddle_id() const;
  inline void set_saddle_id(const ::std::string& value);
  inline void set_saddle_id(const char* value);
  inline void set_saddle_id(const char* value, size_t size);
  inline ::std::string* mutable_saddle_id();
  inline ::std::string* release_saddle_id();
  inline void set_allocated_saddle_id(::std::string* saddle_id);

  // optional double saddle_t = 2;
  inline bool has_saddle_t() const;
  inline void clear_saddle_t();
  static const int kSaddleTFieldNumber = 2;
  inline double saddle_t() const;
  inline void set_saddle_t(double value);

  // @@protoc_insertion_point(class_scope:data_transf.Saddle_t_and_id)
 private:
  inline void set_has_saddle_id();
  inline void clear_has_saddle_id();
  inline void set_has_saddle_t();
  inline void clear_has_saddle_t();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* saddle_id_;
  double saddle_t_;
  friend void  protobuf_AddDesc_sim_5fdata_5ftransf_2eproto();
  friend void protobuf_AssignDesc_sim_5fdata_5ftransf_2eproto();
  friend void protobuf_ShutdownFile_sim_5fdata_5ftransf_2eproto();

  void InitAsDefaultInstance();
  static Saddle_t_and_id* default_instance_;
};
// ===================================================================


// ===================================================================

// Data_dump

// repeated .data_transf.Oscillator oscillator = 1;
inline int Data_dump::oscillator_size() const {
  return oscillator_.size();
}
inline void Data_dump::clear_oscillator() {
  oscillator_.Clear();
}
inline const ::data_transf::Oscillator& Data_dump::oscillator(int index) const {
  // @@protoc_insertion_point(field_get:data_transf.Data_dump.oscillator)
  return oscillator_.Get(index);
}
inline ::data_transf::Oscillator* Data_dump::mutable_oscillator(int index) {
  // @@protoc_insertion_point(field_mutable:data_transf.Data_dump.oscillator)
  return oscillator_.Mutable(index);
}
inline ::data_transf::Oscillator* Data_dump::add_oscillator() {
  // @@protoc_insertion_point(field_add:data_transf.Data_dump.oscillator)
  return oscillator_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::data_transf::Oscillator >&
Data_dump::oscillator() const {
  // @@protoc_insertion_point(field_list:data_transf.Data_dump.oscillator)
  return oscillator_;
}
inline ::google::protobuf::RepeatedPtrField< ::data_transf::Oscillator >*
Data_dump::mutable_oscillator() {
  // @@protoc_insertion_point(field_mutable_list:data_transf.Data_dump.oscillator)
  return &oscillator_;
}

// repeated .data_transf.Saddle_t_and_id saddle_t_and_id = 2;
inline int Data_dump::saddle_t_and_id_size() const {
  return saddle_t_and_id_.size();
}
inline void Data_dump::clear_saddle_t_and_id() {
  saddle_t_and_id_.Clear();
}
inline const ::data_transf::Saddle_t_and_id& Data_dump::saddle_t_and_id(int index) const {
  // @@protoc_insertion_point(field_get:data_transf.Data_dump.saddle_t_and_id)
  return saddle_t_and_id_.Get(index);
}
inline ::data_transf::Saddle_t_and_id* Data_dump::mutable_saddle_t_and_id(int index) {
  // @@protoc_insertion_point(field_mutable:data_transf.Data_dump.saddle_t_and_id)
  return saddle_t_and_id_.Mutable(index);
}
inline ::data_transf::Saddle_t_and_id* Data_dump::add_saddle_t_and_id() {
  // @@protoc_insertion_point(field_add:data_transf.Data_dump.saddle_t_and_id)
  return saddle_t_and_id_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::data_transf::Saddle_t_and_id >&
Data_dump::saddle_t_and_id() const {
  // @@protoc_insertion_point(field_list:data_transf.Data_dump.saddle_t_and_id)
  return saddle_t_and_id_;
}
inline ::google::protobuf::RepeatedPtrField< ::data_transf::Saddle_t_and_id >*
Data_dump::mutable_saddle_t_and_id() {
  // @@protoc_insertion_point(field_mutable_list:data_transf.Data_dump.saddle_t_and_id)
  return &saddle_t_and_id_;
}

// -------------------------------------------------------------------

// Oscillator

// repeated double reset_t = 1 [packed = true];
inline int Oscillator::reset_t_size() const {
  return reset_t_.size();
}
inline void Oscillator::clear_reset_t() {
  reset_t_.Clear();
}
inline double Oscillator::reset_t(int index) const {
  // @@protoc_insertion_point(field_get:data_transf.Oscillator.reset_t)
  return reset_t_.Get(index);
}
inline void Oscillator::set_reset_t(int index, double value) {
  reset_t_.Set(index, value);
  // @@protoc_insertion_point(field_set:data_transf.Oscillator.reset_t)
}
inline void Oscillator::add_reset_t(double value) {
  reset_t_.Add(value);
  // @@protoc_insertion_point(field_add:data_transf.Oscillator.reset_t)
}
inline const ::google::protobuf::RepeatedField< double >&
Oscillator::reset_t() const {
  // @@protoc_insertion_point(field_list:data_transf.Oscillator.reset_t)
  return reset_t_;
}
inline ::google::protobuf::RepeatedField< double >*
Oscillator::mutable_reset_t() {
  // @@protoc_insertion_point(field_mutable_list:data_transf.Oscillator.reset_t)
  return &reset_t_;
}

// -------------------------------------------------------------------

// Saddle_t_and_id

// optional string saddle_id = 1;
inline bool Saddle_t_and_id::has_saddle_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Saddle_t_and_id::set_has_saddle_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Saddle_t_and_id::clear_has_saddle_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Saddle_t_and_id::clear_saddle_id() {
  if (saddle_id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    saddle_id_->clear();
  }
  clear_has_saddle_id();
}
inline const ::std::string& Saddle_t_and_id::saddle_id() const {
  // @@protoc_insertion_point(field_get:data_transf.Saddle_t_and_id.saddle_id)
  return *saddle_id_;
}
inline void Saddle_t_and_id::set_saddle_id(const ::std::string& value) {
  set_has_saddle_id();
  if (saddle_id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    saddle_id_ = new ::std::string;
  }
  saddle_id_->assign(value);
  // @@protoc_insertion_point(field_set:data_transf.Saddle_t_and_id.saddle_id)
}
inline void Saddle_t_and_id::set_saddle_id(const char* value) {
  set_has_saddle_id();
  if (saddle_id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    saddle_id_ = new ::std::string;
  }
  saddle_id_->assign(value);
  // @@protoc_insertion_point(field_set_char:data_transf.Saddle_t_and_id.saddle_id)
}
inline void Saddle_t_and_id::set_saddle_id(const char* value, size_t size) {
  set_has_saddle_id();
  if (saddle_id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    saddle_id_ = new ::std::string;
  }
  saddle_id_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:data_transf.Saddle_t_and_id.saddle_id)
}
inline ::std::string* Saddle_t_and_id::mutable_saddle_id() {
  set_has_saddle_id();
  if (saddle_id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    saddle_id_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:data_transf.Saddle_t_and_id.saddle_id)
  return saddle_id_;
}
inline ::std::string* Saddle_t_and_id::release_saddle_id() {
  clear_has_saddle_id();
  if (saddle_id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = saddle_id_;
    saddle_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Saddle_t_and_id::set_allocated_saddle_id(::std::string* saddle_id) {
  if (saddle_id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete saddle_id_;
  }
  if (saddle_id) {
    set_has_saddle_id();
    saddle_id_ = saddle_id;
  } else {
    clear_has_saddle_id();
    saddle_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:data_transf.Saddle_t_and_id.saddle_id)
}

// optional double saddle_t = 2;
inline bool Saddle_t_and_id::has_saddle_t() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Saddle_t_and_id::set_has_saddle_t() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Saddle_t_and_id::clear_has_saddle_t() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Saddle_t_and_id::clear_saddle_t() {
  saddle_t_ = 0;
  clear_has_saddle_t();
}
inline double Saddle_t_and_id::saddle_t() const {
  // @@protoc_insertion_point(field_get:data_transf.Saddle_t_and_id.saddle_t)
  return saddle_t_;
}
inline void Saddle_t_and_id::set_saddle_t(double value) {
  set_has_saddle_t();
  saddle_t_ = value;
  // @@protoc_insertion_point(field_set:data_transf.Saddle_t_and_id.saddle_t)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace data_transf

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_sim_5fdata_5ftransf_2eproto__INCLUDED
