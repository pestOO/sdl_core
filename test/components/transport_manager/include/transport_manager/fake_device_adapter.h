/*
 * \file fake_device_adapter.h
 * \brief Fake device adapter for test without real devices
 *
 * Copyright (c) 2013, Ford Motor Company
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following
 * disclaimer in the documentation and/or other materials provided with the
 * distribution.
 *
 * Neither the name of the Ford Motor Company nor the names of its contributors
 * may be used to endorse or promote products derived from this software
 * without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef APPLINK_TEST_COMPONENTS_TRANSPORTMANAGER_INCLUDE_FAKEDEVICEADAPTER_H_
#define APPLINK_TEST_COMPONENTS_TRANSPORTMANAGER_INCLUDE_FAKEDEVICEADAPTER_H_

#include "transport_manager/device_adapter_impl.h"

using ::transport_manager::ApplicationHandle;
using ::transport_manager::DeviceHandle;
using ::transport_manager::device_adapter::DeviceAdapterImpl;
using ::transport_manager::device_adapter::DeviceType;
using ::transport_manager::device_adapter::DeviceVector;

namespace test {
namespace components {
namespace transport_manager {

class FakeDeviceAdapter : public DeviceAdapterImpl {
 public:
  FakeDeviceAdapter();
  ~FakeDeviceAdapter() {}
  DeviceType getDeviceType() const { return "fake-adapter"; }
  void addDevice(std::string name);
  void clearDevices();
  void addConnection(const DeviceHandle &device_id, const ApplicationHandle &app_id);
  void clearConnection();

  DeviceVector devices_;
  ::std::list< ::std::pair<DeviceHandle, ApplicationHandle> > connections_;
};

}  // namespace transport_manager
}  // namespace components
}  // namespace test

#endif /* APPLINK_TEST_COMPONENTS_TRANSPORTMANAGER_INCLUDE_FAKEDEVICEADAPTER_H_ */