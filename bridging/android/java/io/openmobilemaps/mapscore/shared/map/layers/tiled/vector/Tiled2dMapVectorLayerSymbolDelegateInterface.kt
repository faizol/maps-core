// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_vector_layer.djinni

package io.openmobilemaps.mapscore.shared.map.layers.tiled.vector

import com.snapchat.djinni.NativeObjectManager
import java.util.concurrent.atomic.AtomicBoolean

abstract class Tiled2dMapVectorLayerSymbolDelegateInterface {

    abstract fun getCustomAssetsFor(featureInfos: ArrayList<VectorLayerFeatureInfo>, layerIdentifier: String): ArrayList<Tiled2dMapVectorAssetInfo>

    private class CppProxy : Tiled2dMapVectorLayerSymbolDelegateInterface {
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

        override fun getCustomAssetsFor(featureInfos: ArrayList<VectorLayerFeatureInfo>, layerIdentifier: String): ArrayList<Tiled2dMapVectorAssetInfo> {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getCustomAssetsFor(this.nativeRef, featureInfos, layerIdentifier)
        }
        private external fun native_getCustomAssetsFor(_nativeRef: Long, featureInfos: ArrayList<VectorLayerFeatureInfo>, layerIdentifier: String): ArrayList<Tiled2dMapVectorAssetInfo>
    }
}
