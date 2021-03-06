/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIProposedTimeEventViewController : EKEventViewController <EKEditItemViewControllerProtocol> {
    EKCalendarEventInvitationNotificationAttendee * _proposedTimeAttendee;
    EKUIRecurrenceAlertController * _recurrenceAlertController;
}

@property (nonatomic) <EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) bool editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) bool presentModally;
@property (retain) EKCalendarEventInvitationNotificationAttendee *proposedTimeAttendee;
@property (retain) EKUIRecurrenceAlertController *recurrenceAlertController;
@property (nonatomic) bool useCustomBackButton;

- (void).cxx_destruct;
- (id)_statusButtons;
- (id)initWithProposedTimeAttendee:(id)arg1;
- (void)invokeAction:(long long)arg1;
- (id)items;
- (id)proposedTime;
- (id)proposedTimeAttendee;
- (id)recurrenceAlertController;
- (void)setProposedTimeAttendee:(id)arg1;
- (void)setRecurrenceAlertController:(id)arg1;
- (id)viewTitle;

@end
