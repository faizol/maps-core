// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

package io.openmobilemaps.mapscore.shared.graphics

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class SceneInterface {

    companion object {
        @JvmStatic
        external fun create(graphicsFactory: io.openmobilemaps.mapscore.shared.graphics.objects.GraphicsObjectFactoryInterface, shaderFactory: io.openmobilemaps.mapscore.shared.graphics.shader.ShaderFactoryInterface, renderingContext: RenderingContextInterface): SceneInterface

        @JvmStatic
        external fun createWithOpenGl(): SceneInterface
    }

    abstract fun setCallbackHandler(callbackInterface: SceneCallbackInterface)

    abstract fun setCamera(camera: CameraInterface)

    abstract fun getCamera(): CameraInterface

    abstract fun getRenderer(): RendererInterface

    abstract fun getRenderingContext(): RenderingContextInterface

    abstract fun getGraphicsFactory(): io.openmobilemaps.mapscore.shared.graphics.objects.GraphicsObjectFactoryInterface

    abstract fun getShaderFactory(): io.openmobilemaps.mapscore.shared.graphics.shader.ShaderFactoryInterface

    abstract fun drawFrame()

    abstract fun clear()

    abstract fun invalidate()

    private class CppProxy : SceneInterface {
        private val nativeRef: Long
        private val destroyed: AtomicBoolean = AtomicBoolean(false)

        private constructor(nativeRef: Long) {
            if (nativeRef == 0L) error("nativeRef is zero")
            this.nativeRef = nativeRef
            NativeObjectManager.register(this, nativeRef)
        }

        external fun nativeDestroy(nativeRef: Long)

        override fun setCallbackHandler(callbackInterface: SceneCallbackInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setCallbackHandler(this.nativeRef, callbackInterface)
        }
        private external fun native_setCallbackHandler(_nativeRef: Long, callbackInterface: SceneCallbackInterface)

        override fun setCamera(camera: CameraInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setCamera(this.nativeRef, camera)
        }
        private external fun native_setCamera(_nativeRef: Long, camera: CameraInterface)

        override fun getCamera(): CameraInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getCamera(this.nativeRef)
        }
        private external fun native_getCamera(_nativeRef: Long): CameraInterface

        override fun getRenderer(): RendererInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getRenderer(this.nativeRef)
        }
        private external fun native_getRenderer(_nativeRef: Long): RendererInterface

        override fun getRenderingContext(): RenderingContextInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getRenderingContext(this.nativeRef)
        }
        private external fun native_getRenderingContext(_nativeRef: Long): RenderingContextInterface

        override fun getGraphicsFactory(): io.openmobilemaps.mapscore.shared.graphics.objects.GraphicsObjectFactoryInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getGraphicsFactory(this.nativeRef)
        }
        private external fun native_getGraphicsFactory(_nativeRef: Long): io.openmobilemaps.mapscore.shared.graphics.objects.GraphicsObjectFactoryInterface

        override fun getShaderFactory(): io.openmobilemaps.mapscore.shared.graphics.shader.ShaderFactoryInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getShaderFactory(this.nativeRef)
        }
        private external fun native_getShaderFactory(_nativeRef: Long): io.openmobilemaps.mapscore.shared.graphics.shader.ShaderFactoryInterface

        override fun drawFrame() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_drawFrame(this.nativeRef)
        }
        private external fun native_drawFrame(_nativeRef: Long)

        override fun clear() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_clear(this.nativeRef)
        }
        private external fun native_clear(_nativeRef: Long)

        override fun invalidate() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_invalidate(this.nativeRef)
        }
        private external fun native_invalidate(_nativeRef: Long)
    }
}
