#include "oiu_crossqt.h"
#include "ui_oiu_crossqt.h"
//#include "portaudio.h"
#include <QStatusBar>
#include <QAction>
#include <QtCore>
#include <QtGui>
#include <QtWidgets/QApplication>


// loading a PortAudio library with 
#define SAMPLE_RATE       (44100)
#define FRAMES_PER_BUFFER   (512)
#define NUM_SECONDS          (10)
#define DITHER_FLAG           (0)

														// Select sample rate
#if 1
#define PA_SAMPLE_TYPE  paFloat32						// 32-bit Float
#define SAMPLE_SIZE (4)
#define SAMPLE_SILENCE  (0.0f)
#define PRINTF_S_FORMAT "%.8f"
#elif 0
#define PA_SAMPLE_TYPE  paInt8							// 8-bit int
#define SAMPLE_SIZE (1)
#define SAMPLE_SILENCE  (0)
#define PRINTF_S_FORMAT "%d"
#elif 0	
#define PA_SAMPLE_TYPE  paInt16							// 16-bit int
#define SAMPLE_SIZE (2)
#define SAMPLE_SILENCE  (0)
#define PRINTF_S_FORMAT "%d"
#elif 0	
#define PA_SAMPLE_TYPE  paInt24							// 24-bit int
#define SAMPLE_SIZE (3)
#define SAMPLE_SILENCE  (0)
#define PRINTF_S_FORMAT "%d"

#else
#define PA_SAMPLE_TYPE  paUInt8
#define SAMPLE_SIZE (1)
#define SAMPLE_SILENCE  (128)
#define PRINTF_S_FORMAT "%d"
#endif


