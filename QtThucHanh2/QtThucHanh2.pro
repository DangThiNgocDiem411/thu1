#-------------------------------------------------
#
# Project created by QtCreator 2017-02-17T11:08:52
#
#-------------------------------------------------

QT       += core gui

#INCLUDEPATH += C:/opencv/install/include
#LIBS += C:/opencv/install/x86/mingw/bin/libopencv_core320.dll \
   # C:/opencv/install/x86/mingw/bin/libopencv_highgui320.dll \
    #C:/opencv/install/x86/mingw/bin/libopencv_imgcodecs320.dll

INCLUDEPATH += C:/OpenCV-android-sdk/sdk/native/jni/include

OPENCV3RDPARTYLIBS = C:/OpenCV-android-sdk/sdk/native/3rdparty/libs/armeabi-v7a
OPENCVNATIVELIBS = C:/OpenCV-android-sdk/sdk/native/libs/armeabi-v7a

LIBS += $$OPENCV3RDPARTYLIBS/liblibtiff.a \
$$OPENCV3RDPARTYLIBS/liblibjpeg.a \
$$OPENCV3RDPARTYLIBS/liblibjasper.a \
$$OPENCV3RDPARTYLIBS/liblibpng.a \
$$OPENCV3RDPARTYLIBS/libtbb.a \
$$OPENCV3RDPARTYLIBS/libIlmImf.a

LIBS += $$OPENCVNATIVELIBS/libopencv_core.a \
$$OPENCVNATIVELIBS/libopencv_androidcamera.a \
$$OPENCVNATIVELIBS/libopencv_flann.a \
$$OPENCVNATIVELIBS/libopencv_imgproc.a \
$$OPENCVNATIVELIBS/libopencv_highgui.a \
$$OPENCVNATIVELIBS/libopencv_features2d.a \
$$OPENCVNATIVELIBS/libopencv_calib3d.a \
$$OPENCVNATIVELIBS/libopencv_ml.a \
$$OPENCVNATIVELIBS/libopencv_objdetect.a \
$$OPENCVNATIVELIBS/libopencv_photo.a \
$$OPENCVNATIVELIBS/libopencv_stitching.a \
$$OPENCVNATIVELIBS/libopencv_superres.a \
$$OPENCVNATIVELIBS/libopencv_ts.a \
$$OPENCVNATIVELIBS/libopencv_video.a \
$$OPENCVNATIVELIBS/libopencv_videostab.a \
$$OPENCVNATIVELIBS/libopencv_java.so







greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtThucHanh2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    openimages.cpp \
    form1.cpp \
    mainwindow1.cpp \
    thu1.cpp

HEADERS  += mainwindow.h \
    openimages.h \
    form1.h \
    mainwindow1.h \
    thu1.h

FORMS    += mainwindow.ui \
    openimages.ui \
    form1.ui \
    mainwindow1.ui

CONFIG += mobility
MOBILITY = 

DISTFILES += \
    Openimages.java

