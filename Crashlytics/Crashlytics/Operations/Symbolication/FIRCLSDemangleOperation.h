// Copyright 2019 Google
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

#import "Crashlytics/Crashlytics/Operations/Symbolication/FIRCLSThreadArrayOperation.h"
typedef char *(*Swift_Demangle)(const char *, size_t, char *, size_t *, uint32_t);

@interface FIRCLSDemangleOperation : FIRCLSThreadArrayOperation

+ (NSString *)demangleSymbol:(const char *)symbol;
+ (NSString *)demangleCppSymbol:(const char *)symbol;
+ (NSString *)demangleSwiftSymbol:(const char *)symbol;

- (NSString *)demangleSymbol:(const char *)symbol;

@end
