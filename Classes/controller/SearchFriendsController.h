//
//  SearchFriendsController.h
//  omedia
//
//  Created by xu hongfeng on 11-10-8.
//  Copyright 2011 THU. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseController.h"

@class AddFriendController;

@interface SearchFriendsController : BaseController {
    IBOutlet UIActivityIndicatorView *indicator;
    IBOutlet UITableView *tableView;
	NSMutableArray* friends;
	AddFriendController* addFriendController;
	UIPopoverController* popoverController;
}


- (id)init;
- (void) dealloc;


@end
