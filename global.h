#pragma once

class Global {
public:
	int H_valm = 44, S_valm = 62, V_valm = 102, H_val = 118, S_val = 255, V_val = 255;
	//inRange(Hsv_frame, Scalar(110, 50, 50), Scalar(130, 255, 255), outPutImage);blue
	//inRange(Hsv_frame, Scalar(10, 100, 20), Scalar(25, 255, 255), outPutImage);orange
	//inRange(Hsv_frame, Scalar(36, 0, 0), Scalar(86, 255, 255), outPutImage);
	int H_valm_1 = 36, S_valm_1 = 0, V_valm_1 = 0, H_val_1 = 86, S_val_1 = 255, V_val_1 = 255;
	//inRange(hsv, Scalar(0, 70, 50), Scalar(10, 255, 255), mask1);red
	int H_valm_2 = 0, S_valm_2 = 70, V_valm_2 = 50, H_val_2 = 10, S_val_2 = 255, V_val_2 = 255;
	int brash_size = 5;
	int erase_size = 10;
	bool new_paint = true;
	bool startstop = true;
	int distanceseuil = 100;
	
public:
	Global() = default;
	Global(const Global&) = delete;
	Global(Global&&) = delete;

	static Global& Instance() {
		static Global global;
		return global;
	}
};

namespace { Global& global = Global::Instance(); }