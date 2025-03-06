///
/// HybridContactListenerSpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/HybridObject.hpp>)
#include <NitroModules/HybridObject.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

// Forward declaration of `ContactEvent` to properly resolve imports.
namespace margelo::nitro::contactlistner { struct ContactEvent; }

#include <functional>
#include "ContactEvent.hpp"

namespace margelo::nitro::contactlistner {

  using namespace margelo::nitro;

  /**
   * An abstract base class for `ContactListener`
   * Inherit this class to create instances of `HybridContactListenerSpec` in C++.
   * You must explicitly call `HybridObject`'s constructor yourself, because it is virtual.
   * @example
   * ```cpp
   * class HybridContactListener: public HybridContactListenerSpec {
   * public:
   *   HybridContactListener(...): HybridObject(TAG) { ... }
   *   // ...
   * };
   * ```
   */
  class HybridContactListenerSpec: public virtual HybridObject {
    public:
      // Constructor
      explicit HybridContactListenerSpec(): HybridObject(TAG) { }

      // Destructor
      ~HybridContactListenerSpec() override = default;

    public:
      // Properties
      

    public:
      // Methods
      virtual void startListening(const std::function<void(const ContactEvent& /* event */)>& callback) = 0;
      virtual void stopListening() = 0;

    protected:
      // Hybrid Setup
      void loadHybridMethods() override;

    protected:
      // Tag for logging
      static constexpr auto TAG = "ContactListener";
  };

} // namespace margelo::nitro::contactlistner
