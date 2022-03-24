/************************************************************************************
 *
 * D++, A Lightweight C++ library for Discord
 *
 * Copyright 2022 Craig Edwards and D++ contributors
 * (https://github.com/brainboxdotcc/DPP/graphs/contributors)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ************************************************************************************/


/* Auto-generated by buildtools/make_sync_struct.php.
 *
 * DO NOT EDIT BY HAND!
 *
 * To re-generate this header file re-run the script!
 */ 

#include <dpp/export.h>
#include <dpp/snowflake.h>
#include <dpp/cluster.h>

slashcommand_map cluster::global_bulk_command_create_sync(const std::vector<slashcommand> &commands) {
	return dpp::sync<slashcommand_map>(this, &cluster::global_bulk_command_create, commands);
}

slashcommand cluster::global_command_create_sync(const slashcommand &s) {
	return dpp::sync<slashcommand>(this, &cluster::global_command_create, s);
}

slashcommand cluster::global_command_get_sync(snowflake id) {
	return dpp::sync<slashcommand>(this, &cluster::global_command_get, id);
}

confirmation cluster::global_command_delete_sync(snowflake id) {
	return dpp::sync<confirmation>(this, &cluster::global_command_delete, id);
}

confirmation cluster::global_command_edit_sync(const slashcommand &s) {
	return dpp::sync<confirmation>(this, &cluster::global_command_edit, s);
}

slashcommand_map cluster::global_commands_get_sync() {
	return dpp::sync<slashcommand_map>(this, &cluster::global_commands_get);
}

slashcommand_map cluster::guild_bulk_command_create_sync(const std::vector<slashcommand> &commands, snowflake guild_id) {
	return dpp::sync<slashcommand_map>(this, &cluster::guild_bulk_command_create, commands, guild_id);
}

guild_command_permissions_map cluster::guild_commands_get_permissions_sync(snowflake guild_id) {
	return dpp::sync<guild_command_permissions_map>(this, &cluster::guild_commands_get_permissions, guild_id);
}

guild_command_permissions_map cluster::guild_bulk_command_edit_permissions_sync(const std::vector<slashcommand> &commands, snowflake guild_id) {
	return dpp::sync<guild_command_permissions_map>(this, &cluster::guild_bulk_command_edit_permissions, commands, guild_id);
}

slashcommand cluster::guild_command_create_sync(const slashcommand &s, snowflake guild_id) {
	return dpp::sync<slashcommand>(this, &cluster::guild_command_create, s, guild_id);
}

confirmation cluster::guild_command_delete_sync(snowflake id, snowflake guild_id) {
	return dpp::sync<confirmation>(this, &cluster::guild_command_delete, id, guild_id);
}

confirmation cluster::guild_command_edit_permissions_sync(const slashcommand &s, snowflake guild_id) {
	return dpp::sync<confirmation>(this, &cluster::guild_command_edit_permissions, s, guild_id);
}

slashcommand cluster::guild_command_get_sync(snowflake id, snowflake guild_id) {
	return dpp::sync<slashcommand>(this, &cluster::guild_command_get, id, guild_id);
}

guild_command_permissions cluster::guild_command_get_permissions_sync(snowflake id, snowflake guild_id) {
	return dpp::sync<guild_command_permissions>(this, &cluster::guild_command_get_permissions, id, guild_id);
}

confirmation cluster::guild_command_edit_sync(const slashcommand &s, snowflake guild_id) {
	return dpp::sync<confirmation>(this, &cluster::guild_command_edit, s, guild_id);
}

slashcommand_map cluster::guild_commands_get_sync(snowflake guild_id) {
	return dpp::sync<slashcommand_map>(this, &cluster::guild_commands_get, guild_id);
}

confirmation cluster::interaction_response_create_sync(snowflake interaction_id, const std::string &token, const interaction_response &r) {
	return dpp::sync<confirmation>(this, &cluster::interaction_response_create, interaction_id, token, r);
}

confirmation cluster::interaction_response_edit_sync(const std::string &token, const message &m) {
	return dpp::sync<confirmation>(this, &cluster::interaction_response_edit, token, m);
}

channel cluster::channel_create_sync(const class channel &c) {
	return dpp::sync<channel>(this, &cluster::channel_create, c);
}

confirmation cluster::channel_delete_permission_sync(const class channel &c, snowflake overwrite_id) {
	return dpp::sync<confirmation>(this, &cluster::channel_delete_permission, c, overwrite_id);
}

confirmation cluster::channel_delete_sync(snowflake channel_id) {
	return dpp::sync<confirmation>(this, &cluster::channel_delete, channel_id);
}

confirmation cluster::channel_edit_positions_sync(const std::vector<channel> &c) {
	return dpp::sync<confirmation>(this, &cluster::channel_edit_positions, c);
}

channel cluster::channel_edit_sync(const class channel &c) {
	return dpp::sync<channel>(this, &cluster::channel_edit, c);
}

confirmation cluster::channel_follow_news_sync(const class channel &c, snowflake target_channel_id) {
	return dpp::sync<confirmation>(this, &cluster::channel_follow_news, c, target_channel_id);
}

channel cluster::channel_get_sync(snowflake c) {
	return dpp::sync<channel>(this, &cluster::channel_get, c);
}

confirmation cluster::channel_invite_create_sync(const class channel &c, const class invite &i) {
	return dpp::sync<confirmation>(this, &cluster::channel_invite_create, c, i);
}

invite_map cluster::channel_invites_get_sync(const class channel &c) {
	return dpp::sync<invite_map>(this, &cluster::channel_invites_get, c);
}

channel_map cluster::channels_get_sync(snowflake guild_id) {
	return dpp::sync<channel_map>(this, &cluster::channels_get, guild_id);
}

channel cluster::create_dm_channel_sync(snowflake user_id) {
	return dpp::sync<channel>(this, &cluster::create_dm_channel, user_id);
}

channel_map cluster::current_user_get_dms_sync() {
	return dpp::sync<channel_map>(this, &cluster::current_user_get_dms);
}

message cluster::direct_message_create_sync(snowflake user_id, const message &m) {
	return dpp::sync<message>(this, &cluster::direct_message_create, user_id, m);
}

confirmation cluster::gdm_add_sync(snowflake channel_id, snowflake user_id, const std::string &access_token, const std::string &nick) {
	return dpp::sync<confirmation>(this, &cluster::gdm_add, channel_id, user_id, access_token, nick);
}

confirmation cluster::gdm_remove_sync(snowflake channel_id, snowflake user_id) {
	return dpp::sync<confirmation>(this, &cluster::gdm_remove, channel_id, user_id);
}

emoji cluster::guild_emoji_create_sync(snowflake guild_id, const class emoji& newemoji) {
	return dpp::sync<emoji>(this, &cluster::guild_emoji_create, guild_id, newemoji);
}

confirmation cluster::guild_emoji_delete_sync(snowflake guild_id, snowflake emoji_id) {
	return dpp::sync<confirmation>(this, &cluster::guild_emoji_delete, guild_id, emoji_id);
}

emoji cluster::guild_emoji_edit_sync(snowflake guild_id, const class emoji& newemoji) {
	return dpp::sync<emoji>(this, &cluster::guild_emoji_edit, guild_id, newemoji);
}

emoji cluster::guild_emoji_get_sync(snowflake guild_id, snowflake emoji_id) {
	return dpp::sync<emoji>(this, &cluster::guild_emoji_get, guild_id, emoji_id);
}

emoji_map cluster::guild_emojis_get_sync(snowflake guild_id) {
	return dpp::sync<emoji_map>(this, &cluster::guild_emojis_get, guild_id);
}

gateway cluster::get_gateway_bot_sync() {
	return dpp::sync<gateway>(this, &cluster::get_gateway_bot);
}

confirmation cluster::guild_current_member_edit_sync(snowflake guild_id, const std::string &nickname) {
	return dpp::sync<confirmation>(this, &cluster::guild_current_member_edit, guild_id, nickname);
}

auditlog cluster::guild_auditlog_get_sync(snowflake guild_id) {
	return dpp::sync<auditlog>(this, &cluster::guild_auditlog_get, guild_id);
}

confirmation cluster::guild_ban_add_sync(snowflake guild_id, snowflake user_id, uint32_t delete_message_days, const std::string &reason) {
	return dpp::sync<confirmation>(this, &cluster::guild_ban_add, guild_id, user_id, delete_message_days, reason);
}

confirmation cluster::guild_ban_delete_sync(snowflake guild_id, snowflake user_id) {
	return dpp::sync<confirmation>(this, &cluster::guild_ban_delete, guild_id, user_id);
}

guild cluster::guild_create_sync(const class guild &g) {
	return dpp::sync<guild>(this, &cluster::guild_create, g);
}

confirmation cluster::guild_delete_sync(snowflake guild_id) {
	return dpp::sync<confirmation>(this, &cluster::guild_delete, guild_id);
}

confirmation cluster::guild_delete_integration_sync(snowflake guild_id, snowflake integration_id) {
	return dpp::sync<confirmation>(this, &cluster::guild_delete_integration, guild_id, integration_id);
}

guild cluster::guild_edit_sync(const class guild &g) {
	return dpp::sync<guild>(this, &cluster::guild_edit, g);
}

guild_widget cluster::guild_edit_widget_sync(snowflake guild_id, const class guild_widget &gw) {
	return dpp::sync<guild_widget>(this, &cluster::guild_edit_widget, guild_id, gw);
}

ban cluster::guild_get_ban_sync(snowflake guild_id, snowflake user_id) {
	return dpp::sync<ban>(this, &cluster::guild_get_ban, guild_id, user_id);
}

ban_map cluster::guild_get_bans_sync(snowflake guild_id) {
	return dpp::sync<ban_map>(this, &cluster::guild_get_bans, guild_id);
}

guild cluster::guild_get_sync(snowflake guild_id) {
	return dpp::sync<guild>(this, &cluster::guild_get, guild_id);
}

integration_map cluster::guild_get_integrations_sync(snowflake guild_id) {
	return dpp::sync<integration_map>(this, &cluster::guild_get_integrations, guild_id);
}

guild cluster::guild_get_preview_sync(snowflake guild_id) {
	return dpp::sync<guild>(this, &cluster::guild_get_preview, guild_id);
}

invite cluster::guild_get_vanity_sync(snowflake guild_id) {
	return dpp::sync<invite>(this, &cluster::guild_get_vanity, guild_id);
}

guild_widget cluster::guild_get_widget_sync(snowflake guild_id) {
	return dpp::sync<guild_widget>(this, &cluster::guild_get_widget, guild_id);
}

confirmation cluster::guild_modify_integration_sync(snowflake guild_id, const class integration &i) {
	return dpp::sync<confirmation>(this, &cluster::guild_modify_integration, guild_id, i);
}

prune cluster::guild_get_prune_counts_sync(snowflake guild_id, const struct prune& pruneinfo) {
	return dpp::sync<prune>(this, &cluster::guild_get_prune_counts, guild_id, pruneinfo);
}

prune cluster::guild_begin_prune_sync(snowflake guild_id, const struct prune& pruneinfo) {
	return dpp::sync<prune>(this, &cluster::guild_begin_prune, guild_id, pruneinfo);
}

confirmation cluster::guild_set_nickname_sync(snowflake guild_id, const std::string &nickname) {
	return dpp::sync<confirmation>(this, &cluster::guild_set_nickname, guild_id, nickname);
}

confirmation cluster::guild_sync_integration_sync(snowflake guild_id, snowflake integration_id) {
	return dpp::sync<confirmation>(this, &cluster::guild_sync_integration, guild_id, integration_id);
}

confirmation cluster::guild_add_member_sync(const guild_member& gm, const std::string &access_token) {
	return dpp::sync<confirmation>(this, &cluster::guild_add_member, gm, access_token);
}

guild_member cluster::guild_edit_member_sync(const guild_member& gm) {
	return dpp::sync<guild_member>(this, &cluster::guild_edit_member, gm);
}

guild_member cluster::guild_get_member_sync(snowflake guild_id, snowflake user_id) {
	return dpp::sync<guild_member>(this, &cluster::guild_get_member, guild_id, user_id);
}

guild_member_map cluster::guild_get_members_sync(snowflake guild_id, uint16_t limit, snowflake after) {
	return dpp::sync<guild_member_map>(this, &cluster::guild_get_members, guild_id, limit, after);
}

confirmation cluster::guild_member_add_role_sync(snowflake guild_id, snowflake user_id, snowflake role_id) {
	return dpp::sync<confirmation>(this, &cluster::guild_member_add_role, guild_id, user_id, role_id);
}

confirmation cluster::guild_member_delete_sync(snowflake guild_id, snowflake user_id) {
	return dpp::sync<confirmation>(this, &cluster::guild_member_delete, guild_id, user_id);
}

confirmation cluster::guild_member_kick_sync(snowflake guild_id, snowflake user_id, const std::string& reason) {
	return dpp::sync<confirmation>(this, &cluster::guild_member_kick, guild_id, user_id, reason);
}

confirmation cluster::guild_member_delete_role_sync(snowflake guild_id, snowflake user_id, snowflake role_id) {
	return dpp::sync<confirmation>(this, &cluster::guild_member_delete_role, guild_id, user_id, role_id);
}

guild_member cluster::guild_member_move_sync(const snowflake channel_id, const snowflake guild_id, const snowflake user_id) {
	return dpp::sync<guild_member>(this, &cluster::guild_member_move, channel_id, guild_id, user_id);
}

guild_member_map cluster::guild_search_members_sync(snowflake guild_id, const std::string& query, uint16_t limit) {
	return dpp::sync<guild_member_map>(this, &cluster::guild_search_members, guild_id, query, limit);
}

invite_map cluster::guild_get_invites_sync(snowflake guild_id) {
	return dpp::sync<invite_map>(this, &cluster::guild_get_invites, guild_id);
}

invite cluster::invite_delete_sync(const std::string &invitecode) {
	return dpp::sync<invite>(this, &cluster::invite_delete, invitecode);
}

invite cluster::invite_get_sync(const std::string &invitecode) {
	return dpp::sync<invite>(this, &cluster::invite_get, invitecode);
}

message cluster::message_create_sync(const message &m) {
	return dpp::sync<message>(this, &cluster::message_create, m);
}

message cluster::message_crosspost_sync(snowflake message_id, snowflake channel_id) {
	return dpp::sync<message>(this, &cluster::message_crosspost, message_id, channel_id);
}

confirmation cluster::message_delete_bulk_sync(const std::vector<snowflake>& message_ids, snowflake channel_id) {
	return dpp::sync<confirmation>(this, &cluster::message_delete_bulk, message_ids, channel_id);
}

confirmation cluster::message_delete_sync(snowflake message_id, snowflake channel_id) {
	return dpp::sync<confirmation>(this, &cluster::message_delete, message_id, channel_id);
}

message cluster::message_edit_sync(const message &m) {
	return dpp::sync<message>(this, &cluster::message_edit, m);
}

message cluster::message_get_sync(snowflake message_id, snowflake channel_id) {
	return dpp::sync<message>(this, &cluster::message_get, message_id, channel_id);
}

confirmation cluster::message_pin_sync(snowflake channel_id, snowflake message_id) {
	return dpp::sync<confirmation>(this, &cluster::message_pin, channel_id, message_id);
}

message_map cluster::messages_get_sync(snowflake channel_id, snowflake around, snowflake before, snowflake after, uint64_t limit) {
	return dpp::sync<message_map>(this, &cluster::messages_get, channel_id, around, before, after, limit);
}

confirmation cluster::message_unpin_sync(snowflake channel_id, snowflake message_id) {
	return dpp::sync<confirmation>(this, &cluster::message_unpin, channel_id, message_id);
}

message_map cluster::channel_pins_get_sync(snowflake channel_id) {
	return dpp::sync<message_map>(this, &cluster::channel_pins_get, channel_id);
}

role cluster::role_create_sync(const class role &r) {
	return dpp::sync<role>(this, &cluster::role_create, r);
}

confirmation cluster::role_delete_sync(snowflake guild_id, snowflake role_id) {
	return dpp::sync<confirmation>(this, &cluster::role_delete, guild_id, role_id);
}

role cluster::role_edit_sync(const class role &r) {
	return dpp::sync<role>(this, &cluster::role_edit, r);
}

role_map cluster::roles_edit_position_sync(snowflake guild_id, const std::vector<role> &roles) {
	return dpp::sync<role_map>(this, &cluster::roles_edit_position, guild_id, roles);
}

role_map cluster::roles_get_sync(snowflake guild_id) {
	return dpp::sync<role_map>(this, &cluster::roles_get, guild_id);
}

scheduled_event_map cluster::guild_events_get_sync(snowflake guild_id) {
	return dpp::sync<scheduled_event_map>(this, &cluster::guild_events_get, guild_id);
}

scheduled_event cluster::guild_event_create_sync(const scheduled_event& event) {
	return dpp::sync<scheduled_event>(this, &cluster::guild_event_create, event);
}

confirmation cluster::guild_event_delete_sync(snowflake event_id, snowflake guild_id) {
	return dpp::sync<confirmation>(this, &cluster::guild_event_delete, event_id, guild_id);
}

scheduled_event cluster::guild_event_edit_sync(const scheduled_event& event) {
	return dpp::sync<scheduled_event>(this, &cluster::guild_event_edit, event);
}

scheduled_event cluster::guild_event_get_sync(snowflake guild_id, snowflake event_id) {
	return dpp::sync<scheduled_event>(this, &cluster::guild_event_get, guild_id, event_id);
}

stage_instance cluster::stage_instance_create_sync(const stage_instance& si) {
	return dpp::sync<stage_instance>(this, &cluster::stage_instance_create, si);
}

stage_instance cluster::stage_instance_get_sync(const snowflake channel_id) {
	return dpp::sync<stage_instance>(this, &cluster::stage_instance_get, channel_id);
}

stage_instance cluster::stage_instance_edit_sync(const stage_instance& si) {
	return dpp::sync<stage_instance>(this, &cluster::stage_instance_edit, si);
}

confirmation cluster::stage_instance_delete_sync(const snowflake channel_id) {
	return dpp::sync<confirmation>(this, &cluster::stage_instance_delete, channel_id);
}

sticker cluster::guild_sticker_create_sync(sticker &s) {
	return dpp::sync<sticker>(this, &cluster::guild_sticker_create, s);
}

confirmation cluster::guild_sticker_delete_sync(snowflake sticker_id, snowflake guild_id) {
	return dpp::sync<confirmation>(this, &cluster::guild_sticker_delete, sticker_id, guild_id);
}

sticker cluster::guild_sticker_get_sync(snowflake id, snowflake guild_id) {
	return dpp::sync<sticker>(this, &cluster::guild_sticker_get, id, guild_id);
}

sticker cluster::guild_sticker_modify_sync(sticker &s) {
	return dpp::sync<sticker>(this, &cluster::guild_sticker_modify, s);
}

sticker_map cluster::guild_stickers_get_sync(snowflake guild_id) {
	return dpp::sync<sticker_map>(this, &cluster::guild_stickers_get, guild_id);
}

sticker cluster::nitro_sticker_get_sync(snowflake id) {
	return dpp::sync<sticker>(this, &cluster::nitro_sticker_get, id);
}

sticker_pack_map cluster::sticker_packs_get_sync() {
	return dpp::sync<sticker_pack_map>(this, &cluster::sticker_packs_get);
}

guild cluster::guild_create_from_template_sync(const std::string &code, const std::string &name) {
	return dpp::sync<guild>(this, &cluster::guild_create_from_template, code, name);
}

dtemplate cluster::guild_template_create_sync(snowflake guild_id, const std::string &name, const std::string &description) {
	return dpp::sync<dtemplate>(this, &cluster::guild_template_create, guild_id, name, description);
}

confirmation cluster::guild_template_delete_sync(snowflake guild_id, const std::string &code) {
	return dpp::sync<confirmation>(this, &cluster::guild_template_delete, guild_id, code);
}

dtemplate cluster::guild_template_modify_sync(snowflake guild_id, const std::string &code, const std::string &name, const std::string &description) {
	return dpp::sync<dtemplate>(this, &cluster::guild_template_modify, guild_id, code, name, description);
}

dtemplate_map cluster::guild_templates_get_sync(snowflake guild_id) {
	return dpp::sync<dtemplate_map>(this, &cluster::guild_templates_get, guild_id);
}

dtemplate cluster::guild_template_sync_sync(snowflake guild_id, const std::string &code) {
	return dpp::sync<dtemplate>(this, &cluster::guild_template_sync, guild_id, code);
}

dtemplate cluster::template_get_sync(const std::string &code) {
	return dpp::sync<dtemplate>(this, &cluster::template_get, code);
}

confirmation cluster::current_user_join_thread_sync(snowflake thread_id) {
	return dpp::sync<confirmation>(this, &cluster::current_user_join_thread, thread_id);
}

confirmation cluster::current_user_leave_thread_sync(snowflake thread_id) {
	return dpp::sync<confirmation>(this, &cluster::current_user_leave_thread, thread_id);
}

thread_map cluster::threads_get_active_sync(snowflake channel_id) {
	return dpp::sync<thread_map>(this, &cluster::threads_get_active, channel_id);
}

thread_map cluster::threads_get_joined_private_archived_sync(snowflake channel_id, snowflake before_id, uint16_t limit) {
	return dpp::sync<thread_map>(this, &cluster::threads_get_joined_private_archived, channel_id, before_id, limit);
}

thread_map cluster::threads_get_private_archived_sync(snowflake channel_id, time_t before_timestamp, uint16_t limit) {
	return dpp::sync<thread_map>(this, &cluster::threads_get_private_archived, channel_id, before_timestamp, limit);
}

thread_map cluster::threads_get_public_archived_sync(snowflake channel_id, time_t before_timestamp, uint16_t limit) {
	return dpp::sync<thread_map>(this, &cluster::threads_get_public_archived, channel_id, before_timestamp, limit);
}

thread_member cluster::thread_member_get_sync(const snowflake thread_id, const snowflake user_id) {
	return dpp::sync<thread_member>(this, &cluster::thread_member_get, thread_id, user_id);
}

thread_member_map cluster::thread_members_get_sync(snowflake thread_id) {
	return dpp::sync<thread_member_map>(this, &cluster::thread_members_get, thread_id);
}

thread cluster::thread_create_sync(const std::string& thread_name, snowflake channel_id, uint16_t auto_archive_duration, channel_type thread_type, bool invitable, uint16_t rate_limit_per_user) {
	return dpp::sync<thread>(this, &cluster::thread_create, thread_name, channel_id, auto_archive_duration, thread_type, invitable, rate_limit_per_user);
}

thread cluster::thread_create_with_message_sync(const std::string& thread_name, snowflake channel_id, snowflake message_id, uint16_t auto_archive_duration, uint16_t rate_limit_per_user) {
	return dpp::sync<thread>(this, &cluster::thread_create_with_message, thread_name, channel_id, message_id, auto_archive_duration, rate_limit_per_user);
}

confirmation cluster::thread_member_add_sync(snowflake thread_id, snowflake user_id) {
	return dpp::sync<confirmation>(this, &cluster::thread_member_add, thread_id, user_id);
}

confirmation cluster::thread_member_remove_sync(snowflake thread_id, snowflake user_id) {
	return dpp::sync<confirmation>(this, &cluster::thread_member_remove, thread_id, user_id);
}

user cluster::current_user_edit_sync(const std::string &nickname, const std::string& image_blob, const image_type type) {
	return dpp::sync<user>(this, &cluster::current_user_edit, nickname, image_blob, type);
}

application cluster::current_application_get_sync() {
	return dpp::sync<application>(this, &cluster::current_application_get);
}

user_identified cluster::current_user_get_sync() {
	return dpp::sync<user_identified>(this, &cluster::current_user_get);
}

confirmation cluster::current_user_set_voice_state_sync(snowflake guild_id, snowflake channel_id, bool suppress, time_t request_to_speak_timestamp) {
	return dpp::sync<confirmation>(this, &cluster::current_user_set_voice_state, guild_id, channel_id, suppress, request_to_speak_timestamp);
}

confirmation cluster::user_set_voice_state_sync(snowflake user_id, snowflake guild_id, snowflake channel_id, bool suppress) {
	return dpp::sync<confirmation>(this, &cluster::user_set_voice_state, user_id, guild_id, channel_id, suppress);
}

connection_map cluster::current_user_connections_get_sync() {
	return dpp::sync<connection_map>(this, &cluster::current_user_connections_get);
}

guild_map cluster::current_user_get_guilds_sync() {
	return dpp::sync<guild_map>(this, &cluster::current_user_get_guilds);
}

confirmation cluster::current_user_leave_guild_sync(snowflake guild_id) {
	return dpp::sync<confirmation>(this, &cluster::current_user_leave_guild, guild_id);
}

user_identified cluster::user_get_sync(snowflake user_id) {
	return dpp::sync<user_identified>(this, &cluster::user_get, user_id);
}

voiceregion_map cluster::get_voice_regions_sync() {
	return dpp::sync<voiceregion_map>(this, &cluster::get_voice_regions);
}

voiceregion_map cluster::guild_get_voice_regions_sync(snowflake guild_id) {
	return dpp::sync<voiceregion_map>(this, &cluster::guild_get_voice_regions, guild_id);
}

webhook cluster::create_webhook_sync(const class webhook &w) {
	return dpp::sync<webhook>(this, &cluster::create_webhook, w);
}

confirmation cluster::delete_webhook_sync(snowflake webhook_id) {
	return dpp::sync<confirmation>(this, &cluster::delete_webhook, webhook_id);
}

confirmation cluster::delete_webhook_message_sync(const class webhook &wh, snowflake message_id) {
	return dpp::sync<confirmation>(this, &cluster::delete_webhook_message, wh, message_id);
}

confirmation cluster::delete_webhook_with_token_sync(snowflake webhook_id, const std::string &token) {
	return dpp::sync<confirmation>(this, &cluster::delete_webhook_with_token, webhook_id, token);
}

webhook cluster::edit_webhook_sync(const class webhook& wh) {
	return dpp::sync<webhook>(this, &cluster::edit_webhook, wh);
}

message cluster::edit_webhook_message_sync(const class webhook &wh, const struct message& m) {
	return dpp::sync<message>(this, &cluster::edit_webhook_message, wh, m);
}

webhook cluster::edit_webhook_with_token_sync(const class webhook& wh) {
	return dpp::sync<webhook>(this, &cluster::edit_webhook_with_token, wh);
}

message cluster::execute_webhook_sync(const class webhook &wh, const struct message& m, bool wait, snowflake thread_id) {
	return dpp::sync<message>(this, &cluster::execute_webhook, wh, m, wait, thread_id);
}

webhook_map cluster::get_channel_webhooks_sync(snowflake channel_id) {
	return dpp::sync<webhook_map>(this, &cluster::get_channel_webhooks, channel_id);
}

webhook_map cluster::get_guild_webhooks_sync(snowflake guild_id) {
	return dpp::sync<webhook_map>(this, &cluster::get_guild_webhooks, guild_id);
}

webhook cluster::get_webhook_sync(snowflake webhook_id) {
	return dpp::sync<webhook>(this, &cluster::get_webhook, webhook_id);
}

message cluster::get_webhook_message_sync(const class webhook &wh) {
	return dpp::sync<message>(this, &cluster::get_webhook_message, wh);
}

webhook cluster::get_webhook_with_token_sync(snowflake webhook_id, const std::string &token) {
	return dpp::sync<webhook>(this, &cluster::get_webhook_with_token, webhook_id, token);
}


/* End of auto-generated definitions */
