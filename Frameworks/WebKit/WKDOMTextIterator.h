/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:08 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WKDOMRange;

@interface WKDOMTextIterator : NSObject {

	unique_ptr<WebCore::TextIterator, std::__1::default_delete<WebCore::TextIterator> >* _textIterator;
	Vector<unsigned short, 0, WTF::CrashOnOverflow>* _upconvertedText;

}

@property (readonly) char atEnd; 
@property (readonly) WKDOMRange * currentRange; 
@property (readonly) unsigned currentTextLength; 
@property (readonly) const unsigned short* currentTextPointer; 
-(char)atEnd;
-(void)advance;
-(WKDOMRange *)currentRange;
-(const unsigned short*)currentTextPointer;
-(unsigned)currentTextLength;
-(id)initWithRange:(id)arg1 ;
@end

