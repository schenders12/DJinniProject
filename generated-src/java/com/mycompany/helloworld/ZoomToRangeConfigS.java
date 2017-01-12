// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from EO_API.djinni

package com.mycompany.helloworld;

public final class ZoomToRangeConfigS {


    /*package*/ final short mVideoSource;

    /*package*/ final short mEnable;

    /*package*/ final byte mUseSinglePointAlgorithm;

    /*package*/ final double mMinLensFOV;

    /*package*/ final double mMaxLensFOV;

    /*package*/ final short mMinRange;

    /*package*/ final short mMaxRange;

    public ZoomToRangeConfigS(
            short VideoSource,
            short Enable,
            byte UseSinglePointAlgorithm,
            double MinLensFOV,
            double MaxLensFOV,
            short MinRange,
            short MaxRange) {
        this.mVideoSource = VideoSource;
        this.mEnable = Enable;
        this.mUseSinglePointAlgorithm = UseSinglePointAlgorithm;
        this.mMinLensFOV = MinLensFOV;
        this.mMaxLensFOV = MaxLensFOV;
        this.mMinRange = MinRange;
        this.mMaxRange = MaxRange;
    }

    public short getVideoSource() {
        return mVideoSource;
    }

    /** video source to configure (which lens is connected to) */
    public short getEnable() {
        return mEnable;
    }

    /** enable zoom-to-range for this video source/lens (1=enable) */
    public byte getUseSinglePointAlgorithm() {
        return mUseSinglePointAlgorithm;
    }

    /** use a single point algorithm (min range and max fov only) instead of two points */
    public double getMinLensFOV() {
        return mMinLensFOV;
    }

    /**
     * maximum lens (zoom) field-of-view in degrees
     *   range: 0 to 360.00 (divide by 100 to get value)
     */
    public double getMaxLensFOV() {
        return mMaxLensFOV;
    }

    /**
     * minimum lens (zoom) field-of-view in degrees
     *   range: 0 to 360.00 (divide by 100 to get value)
     */
    public short getMinRange() {
        return mMinRange;
    }

    /**
     * minimum range in centimeters, least significant word (lsw)
     * and most significant word (msw)
     * which corresponds to the maximum FOV of the lens
     * (divide by 100 to get meters)
     * maximum range in centimeters, least significant word (lsw)
     * and most significant word (msw)
     * which corresponds to the minimum FOV of the lens
     * (divide by 100 to get meters)  
     */
    public short getMaxRange() {
        return mMaxRange;
    }

    @Override
    public String toString() {
        return "ZoomToRangeConfigS{" +
                "mVideoSource=" + mVideoSource +
                "," + "mEnable=" + mEnable +
                "," + "mUseSinglePointAlgorithm=" + mUseSinglePointAlgorithm +
                "," + "mMinLensFOV=" + mMinLensFOV +
                "," + "mMaxLensFOV=" + mMaxLensFOV +
                "," + "mMinRange=" + mMinRange +
                "," + "mMaxRange=" + mMaxRange +
        "}";
    }

}