/*
 *  ofxTable.cpp
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
#include "ofxTable.h"

ofxTable::ofxTable()
{
    //ctor
}

ofxTable::~ofxTable()
{
    //dtor
}

void ofxTable::setup(string name, string fontType)
{
    m_fontType = fontType;

    parameters.setName(name);
    parameters.add(space.set("space", 10, 0, 500));
    parameters.add(lineHeight.set("lineHeight", 10, 0, 100));
    parameters.add(columnNumber.set("columnNumber", 4, 0, 100));
    parameters.add(fontSize.set("fontSize", 9, 0, 100));
    parameters.add(position.set("position",ofVec2f(ofGetWidth()*.5,ofGetHeight()*.5),ofVec2f(0,0),ofVec2f(ofGetWidth(),ofGetHeight())));

	color.set("color",ofColor(127),ofColor(0,0),ofColor(255));

	parameters.add(color);

	font.loadFont(ofToDataPath(fontType), fontSize);
}

void ofxTable::update(){
    font.loadFont(ofToDataPath(m_fontType), fontSize);
}

void ofxTable::draw()
{
//    ofSetColor(color);
    for (int i = 0; i < data.size(); ++i){
        font.drawString(data.at(i), position.get().x + (i%columnNumber) * space, position.get().y + (i/columnNumber) * lineHeight);
    }
}
