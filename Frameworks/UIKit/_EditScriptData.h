/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _EditScriptData <NSObject>
@required
+(id)EditScriptDataWithArray:(id)arg1;
+(id)EditScriptDataWithString:(id)arg1 chunkSize:(int)arg2;
-(int)length;
-(id)stringValue;
-(int)lengthOfItem:(int)arg1;
-(int)characterIndexForItem:(int)arg1;
-(int)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(char)arg2;
-(id)stringAtIndex:(int)arg1;

@end

