// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

package io.openmobilemaps.mapscore.shared.graphics

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class RenderPassInterface {

    abstract fun getRenderObjects(): ArrayList<RenderObjectInterface>

    abstract fun addRenderObject(renderObject: RenderObjectInterface)

    abstract fun getRenderPassConfig(): RenderPassConfig

    abstract fun getMaskingObject(): io.openmobilemaps.mapscore.shared.graphics.objects.MaskingObjectInterface?

    abstract fun getScissoringRect(): io.openmobilemaps.mapscore.shared.graphics.common.RectI?

    private class CppProxy : RenderPassInterface {
        private val nativeRef: Long
        private val destroyed: AtomicBoolean = AtomicBoolean(false)

        private constructor(nativeRef: Long) {
            if (nativeRef == 0L) error("nativeRef is zero")
            this.nativeRef = nativeRef
            NativeObjectManager.register(this, nativeRef)
        }

        external fun nativeDestroy(nativeRef: Long)

        override fun getRenderObjects(): ArrayList<RenderObjectInterface> {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getRenderObjects(this.nativeRef)
        }
        private external fun native_getRenderObjects(_nativeRef: Long): ArrayList<RenderObjectInterface>

        override fun addRenderObject(renderObject: RenderObjectInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_addRenderObject(this.nativeRef, renderObject)
        }
        private external fun native_addRenderObject(_nativeRef: Long, renderObject: RenderObjectInterface)

        override fun getRenderPassConfig(): RenderPassConfig {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getRenderPassConfig(this.nativeRef)
        }
        private external fun native_getRenderPassConfig(_nativeRef: Long): RenderPassConfig

        override fun getMaskingObject(): io.openmobilemaps.mapscore.shared.graphics.objects.MaskingObjectInterface? {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getMaskingObject(this.nativeRef)
        }
        private external fun native_getMaskingObject(_nativeRef: Long): io.openmobilemaps.mapscore.shared.graphics.objects.MaskingObjectInterface?

        override fun getScissoringRect(): io.openmobilemaps.mapscore.shared.graphics.common.RectI? {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getScissoringRect(this.nativeRef)
        }
        private external fun native_getScissoringRect(_nativeRef: Long): io.openmobilemaps.mapscore.shared.graphics.common.RectI?
    }
}
