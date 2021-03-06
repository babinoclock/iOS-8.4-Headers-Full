/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSError;

@interface _NSJSONReader : NSObject {

	id input;
	int kind;
	NSError* error;

}
+(char)validForJSON:(id)arg1 depth:(unsigned)arg2 allowFragments:(char)arg3 ;
-(unsigned)findEncodingFromData:(id)arg1 withBOMSkipLength:(unsigned*)arg2 ;
-(id)parseUTF8JSONData:(id)arg1 skipBytes:(unsigned)arg2 options:(unsigned)arg3 ;
-(id)parseData:(id)arg1 options:(unsigned)arg2 ;
-(id)parseStream:(id)arg1 options:(unsigned)arg2 ;
-(void)dealloc;
-(id)init;
-(id)error;
-(void)setError:(id)arg1 ;
@end

