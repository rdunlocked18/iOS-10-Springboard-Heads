//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSOrderedSet, NSSet, SBRootFolder;
@protocol SBIconModelApplicationDataSource, SBIconModelDelegate, SBIconModelStore;

@interface SBIconModel : NSObject
{
    NSDictionary *_desiredIconState;
    NSOrderedSet *_desiredIconStateFlattened;
    NSMutableDictionary *_leafIconsByIdentifier;
    NSSet *_hiddenIconTags;
    NSSet *_visibleIconTags;
    _Bool _tagsHaveBeenSet;
    SBRootFolder *_rootFolder;
    id <SBIconModelStore> _store;
    id <SBIconModelApplicationDataSource> _applicationDataSource;
    id <SBIconModelDelegate> _delegate;
    _Bool _allowsSaving;
    _Bool _ignoresIconsNotInIconState;
    _Bool _sortsIconsAlphabetically;
    NSSet *_archivedLeafIdentifiers;
}

@property(copy, nonatomic) NSSet *archivedLeafIdentifiers; // @synthesize archivedLeafIdentifiers=_archivedLeafIdentifiers;
@property(nonatomic) _Bool sortsIconsAlphabetically; // @synthesize sortsIconsAlphabetically=_sortsIconsAlphabetically;
@property(nonatomic) _Bool ignoresIconsNotInIconState; // @synthesize ignoresIconsNotInIconState=_ignoresIconsNotInIconState;
@property(readonly, nonatomic) id <SBIconModelApplicationDataSource> applicationDataSource; // @synthesize applicationDataSource=_applicationDataSource;
@property(readonly, nonatomic) id <SBIconModelStore> store; // @synthesize store=_store;
@property(nonatomic) __weak id <SBIconModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowsSaving; // @synthesize allowsSaving=_allowsSaving;
@property(retain, nonatomic) NSDictionary *leafIconsByIdentifier; // @synthesize leafIconsByIdentifier=_leafIconsByIdentifier;
- (void).cxx_destruct;
- (void)importDesiredIconState:(id)arg1;
- (_Bool)importState:(id)arg1;
- (id)exportFlattenedState:(_Bool)arg1 includeMissingIcons:(_Bool)arg2;
- (id)exportPendingState:(_Bool)arg1 includeMissingIcons:(_Bool)arg2;
- (id)exportState:(_Bool)arg1;
- (id)forecastedLayoutForIconState:(id)arg1 includeMissingIcons:(_Bool)arg2;
- (id)description;
- (void)layout;
- (void)_replaceAppIconsWithDownloadingIcons:(id)arg1;
- (void)_replaceAppIconsWithDownloadingIcons;
- (void)saveIconStateIfNeeded;
- (void)_saveIconState;
- (void)_saveDesiredIconState;
- (void)deleteIconState;
- (id)_indexPathInRootFolder:(id)arg1 forNewIcon:(id)arg2 isDesignatedLocation:(_Bool *)arg3 replaceExistingIconAtIndexPath:(id *)arg4;
- (id)indexPathForNewIcon:(id)arg1 isDesignatedLocation:(_Bool *)arg2 replaceExistingIconAtIndexPath:(id *)arg3;
- (void)clearDesiredIconStateIfPossible;
- (void)clearDesiredIconState;
- (_Bool)hasDesiredIconState;
- (id)indexPathForIconInPlatformState:(id)arg1;
- (void)removeIconForIdentifier:(id)arg1;
- (void)removeIcon:(id)arg1;
- (void)addIcon:(id)arg1;
- (id)_unarchiveRootFolder;
- (void)transformIconModelForLanguageDirectionalityChange;
- (id)_iconState;
- (id)iconState;
- (id)placeholdersByDisplayID;
- (id)applicationWithBundleIdentifier:(id)arg1;
- (id)applicationIconForBundleIdentifier:(id)arg1;
- (id)leafIconForIdentifier:(id)arg1;
- (id)expectedIconForDisplayIdentifier:(id)arg1;
- (id)_applicationIcons;
- (id)iconsOfClass:(Class)arg1;
- (id)leafIconsWithIdentifiers:(id)arg1;
- (id)leafIcons;
- (id)visibleIconIdentifiers;
- (void)loadAllIcons;
- (void)addIconForApplication:(id)arg1;
- (id)addBookmarkIconForWebClip:(id)arg1;
- (id)bookmarkIconForWebClipIdentifier:(id)arg1;
- (id)downloadingIconForBundleIdentifier:(id)arg1;
- (id)addDownloadingIconForBundleID:(id)arg1 withIdentifier:(id)arg2;
- (id)addDownloadingIconForDownload:(id)arg1;
- (_Bool)_canAddDownloadingIconForBundleID:(id)arg1;
- (_Bool)isIconVisible:(id)arg1;
- (void)setVisibilityOfIconsWithVisibleTags:(id)arg1 hiddenTags:(id)arg2;
- (void)localeChanged;
- (id)rootFolder;
- (void)didUnarchiveMetadata:(id)arg1;
- (id)iconModelMetadata;
- (void)dealloc;
- (id)initWithStore:(id)arg1 applicationDataSource:(id)arg2;

@end

