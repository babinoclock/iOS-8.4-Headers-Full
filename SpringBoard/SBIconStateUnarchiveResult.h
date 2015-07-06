/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:50 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBIconStateUnarchiveContext.h>

@protocol SBIconIndexNode;
@class SBIconModel, NSMutableArray, NSMutableSet, NSString;

@interface SBIconStateUnarchiveResult : NSObject <SBIconStateUnarchiveContext> {

	SBIconModel* _iconSource;
	id<SBIconIndexNode> _node;
	NSMutableArray* _folderStack;
	int _parseDepth;
	NSMutableSet* _nodeIdentifiersUnarchived;
	char _corrupted;
	char _dirty;

}

@property (nonatomic,retain) id<SBIconIndexNode> node;                                      //@synthesize node=_node - In the implementation block
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (getter=isDirty,nonatomic,readonly) char dirty; 
@property (setter=_setIconSource:,nonatomic,retain) SBIconModel * _iconSource;              //@synthesize iconSource=_iconSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_noteEnteredNode;
-(void)_noteExitedNode;
-(SBIconModel *)_iconSource;
-(void)_pushFolder:(id)arg1 ;
-(id)_currentFolder;
-(id)_popFolder;
-(int)_currentParseDepth;
-(void)_noteRepresentationIsCorrupted;
-(void)_noteSignificantDeviation;
-(char)_isNodeIdentifierAlreadyUnarchived:(id)arg1 ;
-(void)_noteNodeIdentifierWasUnarchived:(id)arg1 ;
-(void)_setIconSource:(id)arg1 ;
-(void)_setNode:(id)arg1 ;
-(void)dealloc;
-(char)isValid;
-(id<SBIconIndexNode>)node;
-(char)isDirty;
@end
