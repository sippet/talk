/*
 * libjingle
 * Copyright 2012 Google Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *  1. Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright notice,
 *     this list of conditions and the following disclaimer in the documentation
 *     and/or other materials provided with the distribution.
 *  3. The name of the author may not be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
 * EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef TALK_MEDIA_BASE_CONSTANTS_H_
#define TALK_MEDIA_BASE_CONSTANTS_H_

#include <string>

// This file contains constants related to media.

namespace cricket {

extern const int kVideoCodecClockrate;
extern const int kDataCodecClockrate;
extern const int kDataMaxBandwidth;  // bps

// Default CPU thresholds.
extern const float kHighSystemCpuThreshold;
extern const float kLowSystemCpuThreshold;
extern const float kProcessCpuThreshold;

extern const char kRtxCodecName[];
extern const char kRedCodecName[];
extern const char kUlpfecCodecName[];

// Codec parameters
extern const char kCodecParamAssociatedPayloadType[];

extern const char kOpusCodecName[];
extern const char kIsacCodecName[];
extern const char kL16CodecName[];
extern const char kG722CodecName[];
extern const char kIlbcCodecName[];
extern const char kPcmuCodecName[];
extern const char kPcmaCodecName[];
extern const char kCnCodecName[];
extern const char kDtmfCodecName[];
extern const char kG729CodecName[];

// Attribute parameters
extern const char kCodecParamPTime[];
extern const char kCodecParamMaxPTime[];
// fmtp parameters
extern const char kCodecParamMinPTime[];
extern const char kCodecParamSPropStereo[];
extern const char kCodecParamStereo[];
extern const char kCodecParamUseInbandFec[];
extern const char kCodecParamUseDtx[];
extern const char kCodecParamMaxAverageBitrate[];
extern const char kCodecParamMaxPlaybackRate[];
extern const char kCodecParamSctpProtocol[];
extern const char kCodecParamSctpStreams[];

extern const char kParamValueTrue[];
// Parameters are stored as parameter/value pairs. For parameters who do not
// have a value, |kParamValueEmpty| should be used as value.
extern const char kParamValueEmpty[];

// opus parameters.
// Default value for maxptime according to
// http://tools.ietf.org/html/draft-spittka-payload-rtp-opus-03
extern const int kOpusDefaultMaxPTime;
extern const int kOpusDefaultPTime;
extern const int kOpusDefaultMinPTime;
extern const int kOpusDefaultSPropStereo;
extern const int kOpusDefaultStereo;
extern const int kOpusDefaultUseInbandFec;
extern const int kOpusDefaultUseDtx;
extern const int kOpusDefaultMaxPlaybackRate;

// Prefered values in this code base. Note that they may differ from the default
// values in http://tools.ietf.org/html/draft-spittka-payload-rtp-opus-03
// Only frames larger or equal to 10 ms are currently supported in this code
// base.
extern const int kPreferredMaxPTime;
extern const int kPreferredMinPTime;
extern const int kPreferredSPropStereo;
extern const int kPreferredStereo;
extern const int kPreferredUseInbandFec;

// rtcp-fb messages according to RFC 4585
extern const char kRtcpFbParamNack[];
extern const char kRtcpFbNackParamPli[];
// rtcp-fb messages according to
// http://tools.ietf.org/html/draft-alvestrand-rmcat-remb-00
extern const char kRtcpFbParamRemb[];
// ccm submessages according to RFC 5104
extern const char kRtcpFbParamCcm[];
extern const char kRtcpFbCcmParamFir[];
// Google specific parameters
extern const char kCodecParamMaxBitrate[];
extern const char kCodecParamMinBitrate[];
extern const char kCodecParamStartBitrate[];
extern const char kCodecParamMaxQuantization[];
extern const char kCodecParamPort[];

// We put the data codec names here so callers of
// DataEngine::CreateChannel don't have to import rtpdataengine.h or
// sctpdataengine.h to get the codec names they want to pass in.
extern const int kGoogleRtpDataCodecId;
extern const char kGoogleRtpDataCodecName[];

// TODO(pthatcher): Find an id that won't conflict with anything.  On
// the other hand, it really shouldn't matter since the id won't be
// used on the wire.
extern const int kGoogleSctpDataCodecId;
extern const char kGoogleSctpDataCodecName[];

extern const char kComfortNoiseCodecName[];

// Header extension for audio levels, as defined in
// http://tools.ietf.org/html/draft-ietf-avtext-client-to-mixer-audio-level-03
extern const int kRtpAudioLevelHeaderExtensionDefaultId;
extern const char kRtpAudioLevelHeaderExtension[];

// Header extension for RTP timestamp offset, see RFC 5450 for details:
// http://tools.ietf.org/html/rfc5450
extern const int kRtpTimestampOffsetHeaderExtensionDefaultId;
extern const char kRtpTimestampOffsetHeaderExtension[];

// Header extension for absolute send time, see url for details:
// http://www.webrtc.org/experiments/rtp-hdrext/abs-send-time
extern const int kRtpAbsoluteSenderTimeHeaderExtensionDefaultId;
extern const char kRtpAbsoluteSenderTimeHeaderExtension[];

// Header extension for coordination of video orientation, see url for details:
// http://www.etsi.org/deliver/etsi_ts/126100_126199/126114/12.07.00_60/
// ts_126114v120700p.pdf
extern const int kRtpVideoRotationHeaderExtensionDefaultId;
extern const char kRtpVideoRotationHeaderExtension[];
// We don't support 6 bit CVO. Added here for testing purpose.
extern const char kRtpVideoRotation6BitsHeaderExtensionForTesting[];

extern const int kNumDefaultUnsignalledVideoRecvStreams;

extern const char kVp8CodecName[];
extern const char kVp9CodecName[];
extern const char kH264CodecName[];

extern const int kDefaultVp8PlType;
extern const int kDefaultVp9PlType;
extern const int kDefaultH264PlType;
extern const int kDefaultRedPlType;
extern const int kDefaultUlpfecType;
extern const int kDefaultRtxVp8PlType;

extern const int kDefaultVideoMaxWidth;
extern const int kDefaultVideoMaxHeight;
extern const int kDefaultVideoMaxFramerate;
}  // namespace cricket

#endif  // TALK_MEDIA_BASE_CONSTANTS_H_

