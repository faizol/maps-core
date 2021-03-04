// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from line.djinni

package io.openmobilemaps.mapscore.shared.map.layers.line

import java.util.concurrent.atomic.AtomicBoolean

abstract class LineLayerCallbackInterface {

    abstract fun onLineClickConfirmed(icons: ArrayList<LineInfo>): Boolean

    private class CppProxy : LineLayerCallbackInterface {
        private val nativeRef: Long
        private val destroyed: AtomicBoolean = AtomicBoolean(false)

        private constructor(nativeRef: Long) {
            if (nativeRef == 0L) error("nativeRef is zero")
            this.nativeRef = nativeRef
        }

        private external fun nativeDestroy(nativeRef: Long)
        fun _djinni_private_destroy() {
            val destroyed = this.destroyed.getAndSet(true)
            if (!destroyed) nativeDestroy(this.nativeRef)
        }
        protected fun finalize() {
            _djinni_private_destroy()
        }

        override fun onLineClickConfirmed(icons: ArrayList<LineInfo>): Boolean {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_onLineClickConfirmed(this.nativeRef, icons)
        }
        private external fun native_onLineClickConfirmed(_nativeRef: Long, icons: ArrayList<LineInfo>): Boolean
    }
}