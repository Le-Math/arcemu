alter table `quests` add column `bonushonor` int UNSIGNED DEFAULT '0' NOT NULL after `IsRepeatable`, add column `rewardtitleid` int UNSIGNED DEFAULT '0' NOT NULL after `bonushonor`, add column `rewardtalents` int UNSIGNED DEFAULT '0' NOT NULL after `rewardtitleid`, add column `suggestedplayers` int UNSIGNED DEFAULT '0' NOT NULL after `rewardtalents`;