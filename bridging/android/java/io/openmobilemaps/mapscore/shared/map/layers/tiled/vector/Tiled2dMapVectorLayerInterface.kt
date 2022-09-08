// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tiled_vector_layer.djinni

package io.openmobilemaps.mapscore.shared.map.layers.tiled.vector

import java.util.concurrent.atomic.AtomicBoolean

abstract class Tiled2dMapVectorLayerInterface {

    abstract fun asLayerInterface(): io.openmobilemaps.mapscore.shared.map.LayerInterface

    companion object {
        @JvmStatic
        fun createFromStyleJson(path: String, vectorSource: String, loaders: ArrayList<io.openmobilemaps.mapscore.shared.map.loader.LoaderInterface>, fontLoader: io.openmobilemaps.mapscore.shared.map.loader.FontLoaderInterface, dpFactor: Double): Tiled2dMapVectorLayerInterface {
            return CppProxy.createFromStyleJson(path, vectorSource, loaders, fontLoader, dpFactor)
        }
    }

    private class CppProxy : Tiled2dMapVectorLayerInterface {
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

        override fun asLayerInterface(): io.openmobilemaps.mapscore.shared.map.LayerInterface {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_asLayerInterface(this.nativeRef)
        }
        private external fun native_asLayerInterface(_nativeRef: Long): io.openmobilemaps.mapscore.shared.map.LayerInterface

        companion object {
            @JvmStatic
            external fun createFromStyleJson(path: String, vectorSource: String, loaders: ArrayList<io.openmobilemaps.mapscore.shared.map.loader.LoaderInterface>, fontLoader: io.openmobilemaps.mapscore.shared.map.loader.FontLoaderInterface, dpFactor: Double): Tiled2dMapVectorLayerInterface
        }
    }
}
