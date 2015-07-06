/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSEncodingDetector : NSObject {

	unsigned long _encoding;
	unsigned long _givenNumBytes;
	unsigned long _numChars;
	unsigned long _numMultiByteChars;
	unsigned long _numSingleBytechars;
	unsigned long _skipBytes;
	unsigned long _numZeroBytes;
	unsigned long _mostFrqChars;
	unsigned long _numBigrams;
	unsigned long _numRep;
	unsigned long _numDirect;
	unsigned long _numBase64;
	unsigned long _numSeq;
	unsigned long _numTrigram;
	unsigned long _numLower;
	unsigned long _numHigher;
	double _weight;
	char _hasBase64;
	char _isBigEndian;
	char _hasBOM;
	unsigned _tag;

}
+(id)encodingDetectorWithEncoding:(unsigned)arg1 ;
-(unsigned long)recognizeString:(const char*)arg1 withDataLength:(unsigned long)arg2 withReplacement:(const char*)arg3 withReplacementLength:(unsigned long)arg4 inNewData:(char*)arg5 maxBufferLength:(unsigned long)arg6 actualBufferLength:(unsigned*)arg7 ;
-(void)softReset;
-(double)bytesRatio;
-(unsigned long)maxSkipBytes;
-(double)confidenceWith2Chars;
-(double)multiBytesRatio;
-(id)init;
-(void)reset;
-(double)confidence;
@end

