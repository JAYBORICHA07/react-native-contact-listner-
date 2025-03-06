///
/// NitroContactListner-Swift-Cxx-Bridge.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#include "NitroContactListner-Swift-Cxx-Bridge.hpp"

// Include C++ implementation defined types
#include "HybridContactListenerSpecSwift.hpp"
#include "NitroContactListner-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::contactlistner::bridge::swift {

  // pragma MARK: std::function<void(const ContactEvent& /* event */)>
  Func_void_ContactEvent create_Func_void_ContactEvent(void* _Nonnull swiftClosureWrapper) {
    auto swiftClosure = NitroContactListner::Func_void_ContactEvent::fromUnsafe(swiftClosureWrapper);
    return [swiftClosure = std::move(swiftClosure)](const ContactEvent& event) mutable -> void {
      swiftClosure.call(event);
    };
  }
  
  // pragma MARK: std::shared_ptr<margelo::nitro::contactlistner::HybridContactListenerSpec>
  std::shared_ptr<margelo::nitro::contactlistner::HybridContactListenerSpec> create_std__shared_ptr_margelo__nitro__contactlistner__HybridContactListenerSpec_(void* _Nonnull swiftUnsafePointer) {
    NitroContactListner::HybridContactListenerSpec_cxx swiftPart = NitroContactListner::HybridContactListenerSpec_cxx::fromUnsafe(swiftUnsafePointer);
    return std::make_shared<margelo::nitro::contactlistner::HybridContactListenerSpecSwift>(swiftPart);
  }
  void* _Nonnull get_std__shared_ptr_margelo__nitro__contactlistner__HybridContactListenerSpec_(std__shared_ptr_margelo__nitro__contactlistner__HybridContactListenerSpec_ cppType) {
    std::shared_ptr<margelo::nitro::contactlistner::HybridContactListenerSpecSwift> swiftWrapper = std::dynamic_pointer_cast<margelo::nitro::contactlistner::HybridContactListenerSpecSwift>(cppType);
  #ifdef NITRO_DEBUG
    if (swiftWrapper == nullptr) [[unlikely]] {
      throw std::runtime_error("Class \"HybridContactListenerSpec\" is not implemented in Swift!");
    }
  #endif
    NitroContactListner::HybridContactListenerSpec_cxx& swiftPart = swiftWrapper->getSwiftPart();
    return swiftPart.toUnsafe();
  }

} // namespace margelo::nitro::contactlistner::bridge::swift
