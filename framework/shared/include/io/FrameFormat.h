/*

 Copyright (c) 2017 University of Edinburgh, Imperial College, University of Manchester.
 Developed in the PAMELA project, EPSRC Programme Grant EP/K008730/1

 This code is licensed under the MIT License.

 */


#ifndef IO_FRAMEFORMAT_H
#define IO_FRAMEFORMAT_H

#include <string>

namespace slambench {
	namespace io {
		namespace frameformat {
			enum EFrameFormat {
				UNKNOWN,
				Raster,
				JPEG,
				PNG
			};
			
			EFrameFormat Parse(const std::string &);
		}
	}
}

#endif
