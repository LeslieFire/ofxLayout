/*
 *  ofxTable.h
 *
 *  Created by Leslie Yang on 2014-08-14
 *
 *
 *  Copyright 2014 https://github.com/LeslieFire All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the author nor the names of its contributors
 *       may be used to endorse or promote products derived from this software
 *       without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 *  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 *  FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 *  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 *  OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 *  OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 *  OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 *  OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *  ************************************************************************************ */ 
#ifndef OFXTABLE_H
#define OFXTABLE_H

#include "ofParameterGroup.h"
#include "ofParameter.h"
#include "ofMain.h"

class ofxTable
{
    public:
        ofxTable();
        virtual ~ofxTable();

        void setup(string name, string fontType);
        void update();
        void draw();

        vector<string> Getdata() { return data; }
        void Setdata(vector<string> val) { data = val; }


        vector<string>              data;
        ofParameterGroup            parameters;
        ofParameter<float>          space;
        ofParameter<float>          lineHeight;
        ofParameter<int>            columnNumber;
        ofParameter<int>            fontSize;
        ofParameter<ofVec2f>        position;
        ofParameter<ofColor>        color;

        ofTrueTypeFont              font;
        string                      m_fontType;
};

#endif // OFXTABLE_H
