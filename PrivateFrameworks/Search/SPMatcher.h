/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SPMatcher : NSObject {

	void* _matcher;

}
+(id)transcriptionForString:(id)arg1 withLanguage:(id)arg2 ;
-(void)dealloc;
-(id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(unsigned)arg3 ;
-(char)matchesUTF8String:(const char*)arg1 ;
-(char)matches:(id)arg1 outMatchBits:(unsigned long long*)arg2 ;
-(char)matchesUTF8String:(const char*)arg1 outMatchBits:(unsigned long long*)arg2 ;
-(char)matches:(id)arg1 ;
-(unsigned)wordCount;
@end

