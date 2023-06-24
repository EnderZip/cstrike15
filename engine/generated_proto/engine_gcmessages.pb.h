// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: engine_gcmessages.proto

#if _MSC_VER >= 1300
#ifndef _PS3
#pragma warning(push)
#pragma warning(disable : 4530)	// warning C4530: C++ exception handler used, but unwind semantics are not enabled. Specify /EHsc (disabled due to std headers having exception syntax)
#pragma warning(disable : 4512)	// warning C4512: assignment operator could not be generated
#pragma warning(disable : 4244)	// warning C4244:  warning C4244: '=' : conversion from '__w64 int' to 'int', possible loss of data
#pragma warning(disable : 4267)	// warning C4267: 'argument' : conversion from 'size_t' to 'int', possible loss of data
#pragma warning(disable : 4125)	// warning C4125: decimal digit terminates octal escape sequence
#pragma warning(disable : 4127)	// warning C4127: conditional expression is constant
#pragma warning(disable : 4100)	// warning C4100: 'op' : unreferenced formal parameter
#endif // _PS3
#endif // _MSC_VER
#if _GNUC
#ifndef _PS3
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"
#endif // _PS3
#endif // _GNUC

#ifndef PROTOBUF_engine_5fgcmessages_2eproto__INCLUDED
#define PROTOBUF_engine_5fgcmessages_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "google/protobuf/descriptor.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_engine_5fgcmessages_2eproto();
void protobuf_AssignDesc_engine_5fgcmessages_2eproto();
void protobuf_ShutdownFile_engine_5fgcmessages_2eproto();

class CEngineGotvSyncPacket;

// ===================================================================

class CEngineGotvSyncPacket : public ::google::protobuf::Message {
 public:
  CEngineGotvSyncPacket();
  virtual ~CEngineGotvSyncPacket();

  CEngineGotvSyncPacket(const CEngineGotvSyncPacket& from);

  inline CEngineGotvSyncPacket& operator=(const CEngineGotvSyncPacket& from) {
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
  static const CEngineGotvSyncPacket& default_instance();

  void Swap(CEngineGotvSyncPacket* other);

  // implements Message ----------------------------------------------

  CEngineGotvSyncPacket* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CEngineGotvSyncPacket& from);
  void MergeFrom(const CEngineGotvSyncPacket& from);
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

  // optional uint64 match_id = 1;
  inline bool has_match_id() const;
  inline void clear_match_id();
  static const int kMatchIdFieldNumber = 1;
  inline ::google::protobuf::uint64 match_id() const;
  inline void set_match_id(::google::protobuf::uint64 value);

  // optional uint32 instance_id = 2;
  inline bool has_instance_id() const;
  inline void clear_instance_id();
  static const int kInstanceIdFieldNumber = 2;
  inline ::google::protobuf::uint32 instance_id() const;
  inline void set_instance_id(::google::protobuf::uint32 value);

  // optional uint32 signupfragment = 3;
  inline bool has_signupfragment() const;
  inline void clear_signupfragment();
  static const int kSignupfragmentFieldNumber = 3;
  inline ::google::protobuf::uint32 signupfragment() const;
  inline void set_signupfragment(::google::protobuf::uint32 value);

  // optional uint32 currentfragment = 4;
  inline bool has_currentfragment() const;
  inline void clear_currentfragment();
  static const int kCurrentfragmentFieldNumber = 4;
  inline ::google::protobuf::uint32 currentfragment() const;
  inline void set_currentfragment(::google::protobuf::uint32 value);

  // optional float tickrate = 5;
  inline bool has_tickrate() const;
  inline void clear_tickrate();
  static const int kTickrateFieldNumber = 5;
  inline float tickrate() const;
  inline void set_tickrate(float value);

  // optional uint32 tick = 6;
  inline bool has_tick() const;
  inline void clear_tick();
  static const int kTickFieldNumber = 6;
  inline ::google::protobuf::uint32 tick() const;
  inline void set_tick(::google::protobuf::uint32 value);

  // optional float rtdelay = 8;
  inline bool has_rtdelay() const;
  inline void clear_rtdelay();
  static const int kRtdelayFieldNumber = 8;
  inline float rtdelay() const;
  inline void set_rtdelay(float value);

  // optional float rcvage = 9;
  inline bool has_rcvage() const;
  inline void clear_rcvage();
  static const int kRcvageFieldNumber = 9;
  inline float rcvage() const;
  inline void set_rcvage(float value);

  // optional float keyframe_interval = 10;
  inline bool has_keyframe_interval() const;
  inline void clear_keyframe_interval();
  static const int kKeyframeIntervalFieldNumber = 10;
  inline float keyframe_interval() const;
  inline void set_keyframe_interval(float value);

  // optional uint32 cdndelay = 11;
  inline bool has_cdndelay() const;
  inline void clear_cdndelay();
  static const int kCdndelayFieldNumber = 11;
  inline ::google::protobuf::uint32 cdndelay() const;
  inline void set_cdndelay(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:CEngineGotvSyncPacket)
 private:
  inline void set_has_match_id();
  inline void clear_has_match_id();
  inline void set_has_instance_id();
  inline void clear_has_instance_id();
  inline void set_has_signupfragment();
  inline void clear_has_signupfragment();
  inline void set_has_currentfragment();
  inline void clear_has_currentfragment();
  inline void set_has_tickrate();
  inline void clear_has_tickrate();
  inline void set_has_tick();
  inline void clear_has_tick();
  inline void set_has_rtdelay();
  inline void clear_has_rtdelay();
  inline void set_has_rcvage();
  inline void clear_has_rcvage();
  inline void set_has_keyframe_interval();
  inline void clear_has_keyframe_interval();
  inline void set_has_cdndelay();
  inline void clear_has_cdndelay();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint64 match_id_;
  ::google::protobuf::uint32 instance_id_;
  ::google::protobuf::uint32 signupfragment_;
  ::google::protobuf::uint32 currentfragment_;
  float tickrate_;
  ::google::protobuf::uint32 tick_;
  float rtdelay_;
  float rcvage_;
  float keyframe_interval_;
  ::google::protobuf::uint32 cdndelay_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(10 + 31) / 32];

  friend void  protobuf_AddDesc_engine_5fgcmessages_2eproto();
  friend void protobuf_AssignDesc_engine_5fgcmessages_2eproto();
  friend void protobuf_ShutdownFile_engine_5fgcmessages_2eproto();

  void InitAsDefaultInstance();
  static CEngineGotvSyncPacket* default_instance_;
};
// ===================================================================


// ===================================================================

// CEngineGotvSyncPacket

// optional uint64 match_id = 1;
inline bool CEngineGotvSyncPacket::has_match_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CEngineGotvSyncPacket::set_has_match_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CEngineGotvSyncPacket::clear_has_match_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CEngineGotvSyncPacket::clear_match_id() {
  match_id_ = GOOGLE_ULONGLONG(0);
  clear_has_match_id();
}
inline ::google::protobuf::uint64 CEngineGotvSyncPacket::match_id() const {
  return match_id_;
}
inline void CEngineGotvSyncPacket::set_match_id(::google::protobuf::uint64 value) {
  set_has_match_id();
  match_id_ = value;
}

// optional uint32 instance_id = 2;
inline bool CEngineGotvSyncPacket::has_instance_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CEngineGotvSyncPacket::set_has_instance_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CEngineGotvSyncPacket::clear_has_instance_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CEngineGotvSyncPacket::clear_instance_id() {
  instance_id_ = 0u;
  clear_has_instance_id();
}
inline ::google::protobuf::uint32 CEngineGotvSyncPacket::instance_id() const {
  return instance_id_;
}
inline void CEngineGotvSyncPacket::set_instance_id(::google::protobuf::uint32 value) {
  set_has_instance_id();
  instance_id_ = value;
}

// optional uint32 signupfragment = 3;
inline bool CEngineGotvSyncPacket::has_signupfragment() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CEngineGotvSyncPacket::set_has_signupfragment() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CEngineGotvSyncPacket::clear_has_signupfragment() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CEngineGotvSyncPacket::clear_signupfragment() {
  signupfragment_ = 0u;
  clear_has_signupfragment();
}
inline ::google::protobuf::uint32 CEngineGotvSyncPacket::signupfragment() const {
  return signupfragment_;
}
inline void CEngineGotvSyncPacket::set_signupfragment(::google::protobuf::uint32 value) {
  set_has_signupfragment();
  signupfragment_ = value;
}

// optional uint32 currentfragment = 4;
inline bool CEngineGotvSyncPacket::has_currentfragment() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CEngineGotvSyncPacket::set_has_currentfragment() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CEngineGotvSyncPacket::clear_has_currentfragment() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CEngineGotvSyncPacket::clear_currentfragment() {
  currentfragment_ = 0u;
  clear_has_currentfragment();
}
inline ::google::protobuf::uint32 CEngineGotvSyncPacket::currentfragment() const {
  return currentfragment_;
}
inline void CEngineGotvSyncPacket::set_currentfragment(::google::protobuf::uint32 value) {
  set_has_currentfragment();
  currentfragment_ = value;
}

// optional float tickrate = 5;
inline bool CEngineGotvSyncPacket::has_tickrate() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void CEngineGotvSyncPacket::set_has_tickrate() {
  _has_bits_[0] |= 0x00000010u;
}
inline void CEngineGotvSyncPacket::clear_has_tickrate() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void CEngineGotvSyncPacket::clear_tickrate() {
  tickrate_ = 0;
  clear_has_tickrate();
}
inline float CEngineGotvSyncPacket::tickrate() const {
  return tickrate_;
}
inline void CEngineGotvSyncPacket::set_tickrate(float value) {
  set_has_tickrate();
  tickrate_ = value;
}

// optional uint32 tick = 6;
inline bool CEngineGotvSyncPacket::has_tick() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void CEngineGotvSyncPacket::set_has_tick() {
  _has_bits_[0] |= 0x00000020u;
}
inline void CEngineGotvSyncPacket::clear_has_tick() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void CEngineGotvSyncPacket::clear_tick() {
  tick_ = 0u;
  clear_has_tick();
}
inline ::google::protobuf::uint32 CEngineGotvSyncPacket::tick() const {
  return tick_;
}
inline void CEngineGotvSyncPacket::set_tick(::google::protobuf::uint32 value) {
  set_has_tick();
  tick_ = value;
}

// optional float rtdelay = 8;
inline bool CEngineGotvSyncPacket::has_rtdelay() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void CEngineGotvSyncPacket::set_has_rtdelay() {
  _has_bits_[0] |= 0x00000040u;
}
inline void CEngineGotvSyncPacket::clear_has_rtdelay() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void CEngineGotvSyncPacket::clear_rtdelay() {
  rtdelay_ = 0;
  clear_has_rtdelay();
}
inline float CEngineGotvSyncPacket::rtdelay() const {
  return rtdelay_;
}
inline void CEngineGotvSyncPacket::set_rtdelay(float value) {
  set_has_rtdelay();
  rtdelay_ = value;
}

// optional float rcvage = 9;
inline bool CEngineGotvSyncPacket::has_rcvage() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void CEngineGotvSyncPacket::set_has_rcvage() {
  _has_bits_[0] |= 0x00000080u;
}
inline void CEngineGotvSyncPacket::clear_has_rcvage() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void CEngineGotvSyncPacket::clear_rcvage() {
  rcvage_ = 0;
  clear_has_rcvage();
}
inline float CEngineGotvSyncPacket::rcvage() const {
  return rcvage_;
}
inline void CEngineGotvSyncPacket::set_rcvage(float value) {
  set_has_rcvage();
  rcvage_ = value;
}

// optional float keyframe_interval = 10;
inline bool CEngineGotvSyncPacket::has_keyframe_interval() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void CEngineGotvSyncPacket::set_has_keyframe_interval() {
  _has_bits_[0] |= 0x00000100u;
}
inline void CEngineGotvSyncPacket::clear_has_keyframe_interval() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void CEngineGotvSyncPacket::clear_keyframe_interval() {
  keyframe_interval_ = 0;
  clear_has_keyframe_interval();
}
inline float CEngineGotvSyncPacket::keyframe_interval() const {
  return keyframe_interval_;
}
inline void CEngineGotvSyncPacket::set_keyframe_interval(float value) {
  set_has_keyframe_interval();
  keyframe_interval_ = value;
}

// optional uint32 cdndelay = 11;
inline bool CEngineGotvSyncPacket::has_cdndelay() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void CEngineGotvSyncPacket::set_has_cdndelay() {
  _has_bits_[0] |= 0x00000200u;
}
inline void CEngineGotvSyncPacket::clear_has_cdndelay() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void CEngineGotvSyncPacket::clear_cdndelay() {
  cdndelay_ = 0u;
  clear_has_cdndelay();
}
inline ::google::protobuf::uint32 CEngineGotvSyncPacket::cdndelay() const {
  return cdndelay_;
}
inline void CEngineGotvSyncPacket::set_cdndelay(::google::protobuf::uint32 value) {
  set_has_cdndelay();
  cdndelay_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_engine_5fgcmessages_2eproto__INCLUDED
