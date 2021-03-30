#include <dpp/discord.h>
#include <dpp/event.h>
#include <string>
#include <iostream>
#include <fstream>
#include <dpp/discordclient.h>
#include <dpp/discord.h>
#include <dpp/cache.h>
#include <dpp/stringops.h>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

void channel_update::handle(class DiscordClient* client, json &j) {
	json& d = j["d"];
	dpp::channel* c = dpp::find_channel(from_string<uint64_t>(d["id"].get<std::string>(), std::dec));
	if (c) {
		c->fill_from_json(&d);
	}
}
