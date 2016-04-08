//
//  MMTabBarViewler.h
//  MMTabBarView
//
//  Created by Kent Sutherland on 11/24/06.
//  Copyright 2006 Kent Sutherland. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class MMTabBarView, MMAttachedTabBarButton;

@interface MMTabBarController : NSObject <NSMenuDelegate>
{
	@private
	MMTabBarView	*_tabBarView;
	NSMenu			*_overflowMenu;
}

- (instancetype)initWithTabBarView:(MMTabBarView *)aTabBarView;

@property (readonly) NSMenu *overflowMenu;

- (void)layoutButtons;

@end
