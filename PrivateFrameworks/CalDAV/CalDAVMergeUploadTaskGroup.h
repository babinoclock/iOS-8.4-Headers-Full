/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@protocol CalDAVCalendar, CalDAVPrincipal;
@class CalDAVBulkUploadTaskGroup;

@interface CalDAVMergeUploadTaskGroup : CoreDAVTaskGroup {

	id<CalDAVCalendar> _calendar;
	id<CalDAVPrincipal> _principal;
	CalDAVBulkUploadTaskGroup* _uploadTaskGroup;
	char _shouldTrySyncTokenForBulkUpload;

}
-(void)dealloc;
-(id)initWithCalendar:(id)arg1 principal:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4 ;
-(void)_performBulkUpload;
-(void)_performRegularUpload;
-(void)startTaskGroup;
-(void)cancelTaskGroup;
-(id)dataContentType;
@end

