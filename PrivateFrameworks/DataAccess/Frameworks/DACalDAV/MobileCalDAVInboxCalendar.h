/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DACalDAV/MobileCalDAVCalendar.h>

@class CalDiagInboxCollectionSync;

@interface MobileCalDAVInboxCalendar : MobileCalDAVCalendar {

	CalDiagInboxCollectionSync* _inboxCollectionSyncDiagnostics;

}

@property (nonatomic,retain) CalDiagInboxCollectionSync * inboxCollectionSyncDiagnostics;              //@synthesize inboxCollectionSyncDiagnostics=_inboxCollectionSyncDiagnostics - In the implementation block
-(id)initWithCalendarURL:(id)arg1 calendar:(void*)arg2 principal:(id)arg3 title:(id)arg4 ;
-(id)etagsForItemURLs:(id)arg1 ;
-(char)updateResourcesFromServer:(id)arg1 ;
-(char)deleteResourcesAtURLs:(id)arg1 ;
-(char)isScheduleInbox;
-(id)allItemURLs;
-(void)recordDiagnosticsForAccountSync:(id)arg1 ;
-(void*)_copyEventActionWithURL:(id)arg1 ;
-(void)setETag:(id)arg1 forInvitationAtURL:(id)arg2 uniqueIdentifier:(id)arg3 ;
-(CalDiagInboxCollectionSync *)inboxCollectionSyncDiagnostics;
-(char)_removeInvitationWithURL:(id)arg1 ;
-(void)setInboxCollectionSyncDiagnostics:(CalDiagInboxCollectionSync *)arg1 ;
@end

