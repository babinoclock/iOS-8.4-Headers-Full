/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MFContactsSearchOperation.h>

@class NSString;

@interface MFRecentsSearchOperation : MFContactsSearchOperation {

	NSString* _bundleIdentifier;
	unsigned _implicitGroupThreshold;
	unsigned _queryOptions;

}
+(id)operationWithAddressBook:(void*)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5 bundleIdentifier:(id)arg6 implicitGroupThreshold:(unsigned)arg7 queryOptions:(unsigned)arg8 ;
-(void)dealloc;
-(unsigned)type;
-(void)main;
@end

