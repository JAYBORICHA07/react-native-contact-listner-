#include <jni.h>
#include "NitroContactListnerOnLoad.hpp"

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void*) {
  return margelo::nitro::contactlistner::initialize(vm);
}
