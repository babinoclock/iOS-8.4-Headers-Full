/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface _CUIThemeFacetCacheKey : NSObject {

	renditionkeytoken keyList[16];
	int themeIndex;
	unsigned long long hashPrecalc;

}
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash64;
-(id)initWithKeyList:(const renditionkeytoken*)arg1 themeIndex:(int)arg2 ;
@end

