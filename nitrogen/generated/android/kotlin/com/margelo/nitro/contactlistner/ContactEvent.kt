///
/// ContactEvent.kt
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

package com.margelo.nitro.contactlistner

import androidx.annotation.Keep
import com.facebook.proguard.annotations.DoNotStrip
import com.margelo.nitro.core.*

/**
 * Represents the JavaScript object/struct "ContactEvent".
 */
@DoNotStrip
@Keep
data class ContactEvent
  @DoNotStrip
  @Keep
  constructor(
    val type: ContactEventType,
    val contactId: String
  ) {
  /* main constructor */
}
