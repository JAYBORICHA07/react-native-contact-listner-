///
/// HybridContactListenerSpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#include "HybridContactListenerSpec.hpp"

namespace margelo::nitro::contactlistner {

  void HybridContactListenerSpec::loadHybridMethods() {
    // load base methods/properties
    HybridObject::loadHybridMethods();
    // load custom methods/properties
    registerHybrids(this, [](Prototype& prototype) {
      prototype.registerHybridMethod("startListening", &HybridContactListenerSpec::startListening);
      prototype.registerHybridMethod("stopListening", &HybridContactListenerSpec::stopListening);
    });
  }

} // namespace margelo::nitro::contactlistner
