// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from EO_API.djinni

package com.srcinc.eo_api;

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class EOAPILib {
    public abstract void SetSerialZoom(LensSerialZoomS zoom);

    public abstract short QueryAllLensConfig(short serialIRType);

    public abstract LensSerialZoomS ParseSerialZoomConfigMessage(byte data);

    public abstract void SetSerialIRZoom(LensSerialIRZoomS zoom);

    public abstract LensSerialIRZoomS ParseSerialIRZoomConfigMessage(byte data);

    public abstract void SetZoomToRange(ZoomToRangeConfigS config);

    public abstract ZoomToRangeConfigS ParseZoomToRangeConfigMessage(byte data);

    public abstract void SetConnectionID(short connectionID);

    public abstract void SetLensConfig(LensConfigS config);

    public abstract LensConfigS ParseLensConfigMessage(byte data);

    public static native void ILens();

    private static final class CppProxy extends EOAPILib
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        @Override
        public void SetSerialZoom(LensSerialZoomS zoom)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_SetSerialZoom(this.nativeRef, zoom);
        }
        private native void native_SetSerialZoom(long _nativeRef, LensSerialZoomS zoom);

        @Override
        public short QueryAllLensConfig(short serialIRType)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_QueryAllLensConfig(this.nativeRef, serialIRType);
        }
        private native short native_QueryAllLensConfig(long _nativeRef, short serialIRType);

        @Override
        public LensSerialZoomS ParseSerialZoomConfigMessage(byte data)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_ParseSerialZoomConfigMessage(this.nativeRef, data);
        }
        private native LensSerialZoomS native_ParseSerialZoomConfigMessage(long _nativeRef, byte data);

        @Override
        public void SetSerialIRZoom(LensSerialIRZoomS zoom)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_SetSerialIRZoom(this.nativeRef, zoom);
        }
        private native void native_SetSerialIRZoom(long _nativeRef, LensSerialIRZoomS zoom);

        @Override
        public LensSerialIRZoomS ParseSerialIRZoomConfigMessage(byte data)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_ParseSerialIRZoomConfigMessage(this.nativeRef, data);
        }
        private native LensSerialIRZoomS native_ParseSerialIRZoomConfigMessage(long _nativeRef, byte data);

        @Override
        public void SetZoomToRange(ZoomToRangeConfigS config)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_SetZoomToRange(this.nativeRef, config);
        }
        private native void native_SetZoomToRange(long _nativeRef, ZoomToRangeConfigS config);

        @Override
        public ZoomToRangeConfigS ParseZoomToRangeConfigMessage(byte data)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_ParseZoomToRangeConfigMessage(this.nativeRef, data);
        }
        private native ZoomToRangeConfigS native_ParseZoomToRangeConfigMessage(long _nativeRef, byte data);

        @Override
        public void SetConnectionID(short connectionID)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_SetConnectionID(this.nativeRef, connectionID);
        }
        private native void native_SetConnectionID(long _nativeRef, short connectionID);

        @Override
        public void SetLensConfig(LensConfigS config)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_SetLensConfig(this.nativeRef, config);
        }
        private native void native_SetLensConfig(long _nativeRef, LensConfigS config);

        @Override
        public LensConfigS ParseLensConfigMessage(byte data)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_ParseLensConfigMessage(this.nativeRef, data);
        }
        private native LensConfigS native_ParseLensConfigMessage(long _nativeRef, byte data);
    }
}
