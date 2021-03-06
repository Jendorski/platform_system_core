//
// Copyright (C) 2015 The Android Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef METRICS_CONSTANTS_H_
#define METRICS_CONSTANTS_H_

namespace metrics {
static const char kMetricsDirectory[] = "/data/misc/metrics/";
static const char kMetricsEventsFileName[] = "uma-events";
static const char kMetricsGUIDFileName[] = "Sysinfo.GUID";
static const char kMetricsServer[] = "https://clients4.google.com/uma/v2";
static const char kConsentFileName[] = "enabled";
static const char kStagedLogName[] = "staged_log";
static const char kFailedUploadCountName[] = "failed_upload_count";
static const char kDefaultVersion[] = "0.0.0.0";

// System properties used.
static const char kProductIdProperty[] = "ro.product.product_id";
static const char kChannelProperty[] = "ro.product.channel";
static const char kProductVersionProperty[] = "ro.product.version";
}  // namespace metrics

#endif  // METRICS_CONSTANTS_H_
