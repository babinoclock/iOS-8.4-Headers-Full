/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PFUbiquityLogging : NSObject {

	int _desiredLogLevel;

}

@property (assign,nonatomic) int desiredLogLevel;              //@synthesize desiredLogLevel=_desiredLogLevel - In the implementation block
+(char)canLogMessageAtLevel:(int)arg1 ;
+(void)setLoggingLevel:(int)arg1 ;
+(void)initialize;
-(void)userDefaultsChanged:(id)arg1 ;
-(void)checkUserDefaults;
-(void)setDesiredLogLevel:(int)arg1 ;
-(int)desiredLogLevel;
-(void)dealloc;
-(id)init;
@end

