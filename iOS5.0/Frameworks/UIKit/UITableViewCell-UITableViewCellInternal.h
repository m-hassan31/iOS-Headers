/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UITableViewCell.h>

@interface UITableViewCell (UITableViewCellInternal)
- (void)_setMultiselecting:(BOOL)arg1;
- (void)_multiselectColorChanged;
- (void)_startToEditTextField;
- (id)_scriptingInfo;
- (void)setTableViewStyle:(int)arg1;
- (int)tableViewStyle;
- (void)removeControl:(id)arg1 wasCanceledForTarget:(id)arg2;
- (struct CGRect)removeControl:(id)arg1 endFrameForTarget:(id)arg2;
- (struct CGRect)removeControl:(id)arg1 startFrameForTarget:(id)arg2;
@property(nonatomic, getter=_drawsTopShadow, setter=_setDrawsTopShadow:) BOOL drawsTopShadow;
@property(nonatomic, getter=_needsSetup, setter=_setNeedsSetup:) BOOL needsSetup;
- (void)_descendent:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_descendent:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (SEL)_accessoryAction;
- (void)_setAccessoryAction:(SEL)arg1;
- (id)_target;
- (void)_setTarget:(id)arg1;
@property(nonatomic) BOOL wasSwiped;
- (BOOL)_hasEditingAccessoryView;
- (BOOL)_hasAccessoryView;
- (id)_titleForDeleteConfirmationButton;
- (id)_topShadowView:(BOOL)arg1;
- (id)_selectedBackgroundView:(BOOL)arg1;
- (id)_backgroundView:(BOOL)arg1;
- (id)_customEditingAccessoryView:(BOOL)arg1;
- (id)_customAccessoryView:(BOOL)arg1;
- (id)_editingAccessoryView:(BOOL)arg1;
- (id)_accessoryView:(BOOL)arg1;
- (id)_defaultAccessoryView;
- (void)removeEditingData;
- (id)editingData:(BOOL)arg1;
- (float)_backgroundInset;
- (float)_editingButtonOffset;
- (BOOL)_isReorderable;
- (void)deleteConfirmationControlWasCancelled:(id)arg1;
- (void)deleteConfirmationControlWasClicked:(id)arg1;
- (void)editControlWasClicked:(id)arg1;
- (void)removeControlWillHideRemoveConfirmation:(id)arg1;
- (void)insertControl:(id)arg1 shouldInsertWithTarget:(id)arg2;
- (void)removeControl:(id)arg1 willRemoveTarget:(id)arg2;
- (void)_willBeDeleted;
- (void)_uiRemoveControlMinusButtonHideAnimationDone:(id)arg1;
- (void)_grabberReleased:(id)arg1;
- (void)_grabberDragged:(id)arg1 yDelta:(float)arg2;
- (void)_grabberBeganReorder:(id)arg1;
- (id)_removeControl;
- (void)_removeInnerShadow;
- (void)_animateInnerShadowForInsertion:(BOOL)arg1 withRowAnimation:(int)arg2;
- (void)_removeFloatingSeparator;
- (void)_animateFloatingSeparatorForInsertion:(BOOL)arg1 withRowAnimation:(int)arg2;
- (void)_drawSeparatorInRect:(struct CGRect)arg1;
- (void)_setDrawsTopSeparator:(BOOL)arg1;
- (void)_setShouldIndentWhileEditing:(BOOL)arg1;
- (void)_setShowingDeleteConfirmation:(BOOL)arg1;
- (void)_setEditingStyle:(int)arg1;
- (void)setEditingStyle:(int)arg1;
- (id)_reorderControlImage;
- (void)_setReorderControlImage:(id)arg1;
- (void)_setShowsReorderControl:(BOOL)arg1;
- (id)_imageView:(BOOL)arg1;
- (id)_editableTextField:(BOOL)arg1;
- (id)_detailTextLabel:(BOOL)arg1;
- (id)_textLabel:(BOOL)arg1;
- (id)_tableView;
- (void)_setTableView:(id)arg1;
@end

