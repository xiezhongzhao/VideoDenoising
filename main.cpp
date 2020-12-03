#include <opencv2/opencv.hpp>
#include "MeshFlow.h"
#include "Fast_klt.h"
#include "MotionDenoiser.h"
#include <time.h>

using namespace std;
using namespace cv;

int main(){

    vector<char*> names;
    vector<char*> outNames;
    char* name = new char[1024];
    char* outname = new char[1024];

    sprintf(name, "F:/Work/CPP/VideoDenosing/data/test.avi");
    sprintf(outname, "F:/Work/CPP/VideoDenosing/data/test_out.avi");
    names.push_back(name);
    outNames.push_back(outname);

    MotionDenoiser denoiser(names[0]);
    denoiser.Execute();
    denoiser.SaveResult(outNames[0]);

	return 0;
}







