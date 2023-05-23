// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

package io.openmobilemaps.mapscore.shared.graphics.objects

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class Quad2dInterface {

    abstract fun setFrame(frame: io.openmobilemaps.mapscore.shared.graphics.common.Quad2dD, textureCoordinates: io.openmobilemaps.mapscore.shared.graphics.common.RectD)

    abstract fun loadTexture(context: io.openmobilemaps.mapscore.shared.graphics.RenderingContextInterface, textureHolder: TextureHolderInterface)

    abstract fun removeTexture()

    abstract fun asGraphicsObject(): GraphicsObjectInterface

    abstract fun asMaskingObject(): MaskingObjectInterface

    private class CppProxy : Quad2dInterface {
        private val nativeRef: Long
        private val destroyed: AtomicBoolean = AtomicBoolean(false)

        private constructor(nativeRef: Long) {
            if (nativeRef == 0L) error("nativeRef is zero")
            this.nativeRef = nativeRef
            NativeObjectManager.register(this, nativeRef)
        }

        external fun nativeDestroy(nativeRef: Long)

        override fun setFrame(frame: io.openmobilemaps.mapscore.shared.graphics.common.Quad2dD, textureCoordinates: io.openmobilemaps.mapscore.shared.graphics.common.RectD) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setFrame(this.nativeRef, frame, textureCoordinates)
        }
        private external fun native_setFrame(_nativeRef: Long, frame: io.openmobilemaps.mapscore.shared.graphics.common.Quad2dD, textureCoordinates: io.openmobilemaps.mapscore.shared.graphics.common.RectD)

        override fun loadTexture(context: io.openmobilemaps.mapscore.shared.graphics.RenderingContextInterface, textureHolder: TextureHolderInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_loadTexture(this.nativeRef, context, textureHolder)
        }
        private external fun native_loadTexture(_nativeRef: Long, context: io.openmobilemaps.mapscore.shared.graphics.RenderingContextInterface, textureHolder: TextureHolderInterface)

        override fun removeTexture() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_removeTexture(this.nativeRef)
        }
        private external fun native_removeTexture(_nativeRef: Long)

        override fun asGraphicsObject(): GraphicsObjectInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_asGraphicsObject(this.nativeRef)
        }
        private external fun native_asGraphicsObject(_nativeRef: Long): GraphicsObjectInterface

        override fun asMaskingObject(): MaskingObjectInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_asMaskingObject(this.nativeRef)
        }
        private external fun native_asMaskingObject(_nativeRef: Long): MaskingObjectInterface
    }
}
