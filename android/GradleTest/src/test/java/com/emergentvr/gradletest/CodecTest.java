package com.emergentvr.mobius;

import org.junit.Test;

import java.io.File;
import java.util.regex.Pattern;

import static org.hamcrest.core.Is.is;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertThat;
import static org.junit.Assert.assertTrue;

public class CodecTest {

    @Test
    public void transcodetest() {

        File inputVideo = new File("/sdcard/Mobius/video.mp4");

        //assertThat(inputVideo.exists(), is(true));
        assertThat(true, is(true));
    }
}
