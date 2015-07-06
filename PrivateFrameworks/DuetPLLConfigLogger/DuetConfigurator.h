/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DuetPLLConfigLogger.framework/DuetPLLConfigLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DuetPLLConfigLogger/DuetPLLConfigLogger-Structs.h>
#import <DuetPLLConfigLogger/DuetLoggerProtocol.h>

@class NSBundle, NSMutableDictionary, NSMutableArray, NSUserDefaults;

@interface DuetConfigurator : NSObject <DuetLoggerProtocol> {

	NSBundle* bundle;
	NSMutableDictionary* dictOfConfigurations;
	NSMutableDictionary* appBlackMap;
	NSMutableArray* appWhiteListArray;
	NSUserDefaults* sbDomain;
	NSUserDefaults* bkbdDDomain;

}

@property (nonatomic,retain,readonly) NSMutableDictionary * appBlackMap; 
@property (nonatomic,retain,readonly) NSMutableArray * appWhiteListArray; 
+(id)sharedInstance;
-(id)init;
-(long long)getStateFor:(id)arg1 ;
-(NSMutableArray *)appWhiteListArray;
-(void)logAll:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)reloadBundleFromDisk;
-(NSMutableDictionary *)appBlackMap;
-(void)loadBundleConfigurations;
-(void)loadConfigurations:(id)arg1 ;
-(void)updateSpringBoardConfiguration:(id)arg1 ;
@end

