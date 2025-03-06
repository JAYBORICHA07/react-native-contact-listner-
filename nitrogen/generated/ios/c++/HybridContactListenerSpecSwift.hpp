///
/// HybridContactListenerSpecSwift.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include "HybridContactListenerSpec.hpp"

// Forward declaration of `HybridContactListenerSpec_cxx` to properly resolve imports.
namespace NitroContactListner { class HybridContactListenerSpec_cxx; }

// Forward declaration of `ContactEvent` to properly resolve imports.
namespace margelo::nitro::contactlistner { struct ContactEvent; }
// Forward declaration of `ContactEventType` to properly resolve imports.
namespace margelo::nitro::contactlistner { enum class ContactEventType; }

#include <functional>
#include "ContactEvent.hpp"
#include "ContactEventType.hpp"
#include <string>

#include "NitroContactListner-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::contactlistner {

  /**
   * The C++ part of HybridContactListenerSpec_cxx.swift.
   *
   * HybridContactListenerSpecSwift (C++) accesses HybridContactListenerSpec_cxx (Swift), and might
   * contain some additional bridging code for C++ <> Swift interop.
   *
   * Since this obviously introduces an overhead, I hope at some point in
   * the future, HybridContactListenerSpec_cxx can directly inherit from the C++ class HybridContactListenerSpec
   * to simplify the whole structure and memory management.
   */
  class HybridContactListenerSpecSwift: public virtual HybridContactListenerSpec {
  public:
    // Constructor from a Swift instance
    explicit HybridContactListenerSpecSwift(const NitroContactListner::HybridContactListenerSpec_cxx& swiftPart):
      HybridObject(HybridContactListenerSpec::TAG),
      _swiftPart(swiftPart) { }

  public:
    // Get the Swift part
    inline NitroContactListner::HybridContactListenerSpec_cxx& getSwiftPart() noexcept {
      return _swiftPart;
    }

  public:
    // Get memory pressure
    inline size_t getExternalMemorySize() noexcept override {
      return _swiftPart.getMemorySize();
    }

  public:
    // Properties
    

  public:
    // Methods
    inline void startListening(const std::function<void(const ContactEvent& /* event */)>& callback) override {
      auto __result = _swiftPart.startListening(callback);
      if (__result.hasError()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
    }
    inline void stopListening() override {
      auto __result = _swiftPart.stopListening();
      if (__result.hasError()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
    }

  private:
    NitroContactListner::HybridContactListenerSpec_cxx _swiftPart;
  };

} // namespace margelo::nitro::contactlistner
