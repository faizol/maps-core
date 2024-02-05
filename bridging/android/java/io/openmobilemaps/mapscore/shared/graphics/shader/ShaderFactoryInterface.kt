// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

package io.openmobilemaps.mapscore.shared.graphics.shader

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class ShaderFactoryInterface {

    abstract fun createAlphaShader(): AlphaShaderInterface

    abstract fun createAlphaInstancedShader(): AlphaInstancedShaderInterface

    abstract fun createLineGroupShader(): LineGroupShaderInterface

    abstract fun createColorShader(): ColorShaderInterface

    abstract fun createColorCircleShader(): ColorCircleShaderInterface

    abstract fun createPolygonGroupShader(): PolygonGroupShaderInterface

    abstract fun createPolygonPatternGroupShader(fadeInPattern: Boolean): PolygonPatternGroupShaderInterface

    abstract fun createTextShader(): TextShaderInterface

    abstract fun createTextInstancedShader(): TextInstancedShaderInterface

    abstract fun createRasterShader(): RasterShaderInterface

    abstract fun createStretchShader(): StretchShaderInterface

    abstract fun createStretchInstancedShader(): StretchInstancedShaderInterface

    private class CppProxy : ShaderFactoryInterface {
        private val nativeRef: Long
        private val destroyed: AtomicBoolean = AtomicBoolean(false)

        private constructor(nativeRef: Long) {
            if (nativeRef == 0L) error("nativeRef is zero")
            this.nativeRef = nativeRef
            NativeObjectManager.register(this, nativeRef)
        }

        companion object {
            @JvmStatic
            external fun nativeDestroy(nativeRef: Long)
        }

        override fun createAlphaShader(): AlphaShaderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_createAlphaShader(this.nativeRef)
        }
        private external fun native_createAlphaShader(_nativeRef: Long): AlphaShaderInterface

        override fun createAlphaInstancedShader(): AlphaInstancedShaderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_createAlphaInstancedShader(this.nativeRef)
        }
        private external fun native_createAlphaInstancedShader(_nativeRef: Long): AlphaInstancedShaderInterface

        override fun createLineGroupShader(): LineGroupShaderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_createLineGroupShader(this.nativeRef)
        }
        private external fun native_createLineGroupShader(_nativeRef: Long): LineGroupShaderInterface

        override fun createColorShader(): ColorShaderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_createColorShader(this.nativeRef)
        }
        private external fun native_createColorShader(_nativeRef: Long): ColorShaderInterface

        override fun createColorCircleShader(): ColorCircleShaderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_createColorCircleShader(this.nativeRef)
        }
        private external fun native_createColorCircleShader(_nativeRef: Long): ColorCircleShaderInterface

        override fun createPolygonGroupShader(): PolygonGroupShaderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_createPolygonGroupShader(this.nativeRef)
        }
        private external fun native_createPolygonGroupShader(_nativeRef: Long): PolygonGroupShaderInterface

        override fun createPolygonPatternGroupShader(fadeInPattern: Boolean): PolygonPatternGroupShaderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_createPolygonPatternGroupShader(this.nativeRef, fadeInPattern)
        }
        private external fun native_createPolygonPatternGroupShader(_nativeRef: Long, fadeInPattern: Boolean): PolygonPatternGroupShaderInterface

        override fun createTextShader(): TextShaderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_createTextShader(this.nativeRef)
        }
        private external fun native_createTextShader(_nativeRef: Long): TextShaderInterface

        override fun createTextInstancedShader(): TextInstancedShaderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_createTextInstancedShader(this.nativeRef)
        }
        private external fun native_createTextInstancedShader(_nativeRef: Long): TextInstancedShaderInterface

        override fun createRasterShader(): RasterShaderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_createRasterShader(this.nativeRef)
        }
        private external fun native_createRasterShader(_nativeRef: Long): RasterShaderInterface

        override fun createStretchShader(): StretchShaderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_createStretchShader(this.nativeRef)
        }
        private external fun native_createStretchShader(_nativeRef: Long): StretchShaderInterface

        override fun createStretchInstancedShader(): StretchInstancedShaderInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_createStretchInstancedShader(this.nativeRef)
        }
        private external fun native_createStretchInstancedShader(_nativeRef: Long): StretchInstancedShaderInterface
    }
}
