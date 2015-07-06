/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MecabraFacemarkCandidate : NSObject {

	NSString* _string;
	NSString* _category;

}

@property (readonly) NSString * string;                //@synthesize string=_string - In the implementation block
@property (readonly) NSString * category;              //@synthesize category=_category - In the implementation block
+(id)copyFacemarkCandidatesForLocale:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)category;
-(NSString *)string;
-(id)initWithString:(id)arg1 category:(id)arg2 ;
@end

