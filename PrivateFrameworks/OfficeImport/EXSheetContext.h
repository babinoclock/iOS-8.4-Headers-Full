/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OCDDelayedNodeContext.h>

@class EXReadState, NSURL, NSString;

@interface EXSheetContext : NSObject <OCDDelayedNodeContext> {

	EXReadState* mSheetState;
	NSURL* mPackageLocation;
	NSString* mType;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)loadDelayedNode:(id)arg1 ;
-(id)initWithSheetLocation:(id)arg1 sheetXmlType:(id)arg2 state:(id)arg3 ;
@end

