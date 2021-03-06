/*----------------------------------------------------------------------
 * This file is generated by mk_parser_show.py.
 *----------------------------------------------------------------------*/
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include "cparser.h"
#include "cparser_priv.h"
#include "cparser_token.h"
#include "cparser_show_tree.h"

cparser_result_t
cparser_glue_show_tamper_tampername (cparser_t *parser)
{
    char *tampername_val;
    char **tampername_ptr = NULL;
    cparser_result_t rc;

    if (parser->mode == CPARSER_MODE_CONFIG) {;
       rc = cparser_get_string(&parser->tokens[2], &tampername_val);
        if (CPARSER_OK == rc) {
            tampername_ptr = &tampername_val;
        } else {
            if (3 <= parser->token_tos) {
                cparser_printf(&parser->context, "Invalid value!\n");
                return CPARSER_OK;
            }
        }
    };
    cparser_cmd_show_tamper_tampername(&parser->context,
        tampername_ptr);
    return CPARSER_OK;
}

cparser_result_t
cparser_glue_show_tamper_disk (cparser_t *parser)
{
    if (parser->mode == CPARSER_MODE_CONFIG) {;
    };
    cparser_cmd_show_tamper_disk(&parser->context);
    return CPARSER_OK;
}

cparser_result_t
cparser_glue_show_tamper_log_all (cparser_t *parser)
{
    if (parser->mode == CPARSER_MODE_CONFIG) {;
    };
    cparser_cmd_show_tamper_log_all(&parser->context);
    return CPARSER_OK;
}

cparser_result_t
cparser_glue_show_tamper_log_all_recent_hours (cparser_t *parser)
{
    uint32_t hours_val;
    uint32_t *hours_ptr = NULL;
    cparser_result_t rc;

    if (parser->mode == CPARSER_MODE_CONFIG) {;
       rc = cparser_get_uint(&parser->tokens[4], &hours_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        hours_ptr = &hours_val;
    };
    cparser_cmd_show_tamper_log_all_recent_hours(&parser->context,
        hours_ptr);
    return CPARSER_OK;
}

cparser_result_t
cparser_glue_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min_end_sec (cparser_t *parser)
{
    uint32_t start_year_val;
    uint32_t *start_year_ptr = NULL;
    uint32_t start_month_val;
    uint32_t *start_month_ptr = NULL;
    uint32_t start_day_val;
    uint32_t *start_day_ptr = NULL;
    uint32_t start_hour_val;
    uint32_t *start_hour_ptr = NULL;
    uint32_t start_min_val;
    uint32_t *start_min_ptr = NULL;
    uint32_t start_sec_val;
    uint32_t *start_sec_ptr = NULL;
    uint32_t end_year_val;
    uint32_t *end_year_ptr = NULL;
    uint32_t end_month_val;
    uint32_t *end_month_ptr = NULL;
    uint32_t end_day_val;
    uint32_t *end_day_ptr = NULL;
    uint32_t end_hour_val;
    uint32_t *end_hour_ptr = NULL;
    uint32_t end_min_val;
    uint32_t *end_min_ptr = NULL;
    uint32_t end_sec_val;
    uint32_t *end_sec_ptr = NULL;
    cparser_result_t rc;

    if (parser->mode == CPARSER_MODE_CONFIG) {;
       rc = cparser_get_uint(&parser->tokens[4], &start_year_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        start_year_ptr = &start_year_val;
       rc = cparser_get_uint(&parser->tokens[5], &start_month_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        start_month_ptr = &start_month_val;
       rc = cparser_get_uint(&parser->tokens[6], &start_day_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        start_day_ptr = &start_day_val;
       rc = cparser_get_uint(&parser->tokens[7], &start_hour_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        start_hour_ptr = &start_hour_val;
       rc = cparser_get_uint(&parser->tokens[8], &start_min_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        start_min_ptr = &start_min_val;
       rc = cparser_get_uint(&parser->tokens[9], &start_sec_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        start_sec_ptr = &start_sec_val;
       rc = cparser_get_uint(&parser->tokens[11], &end_year_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        end_year_ptr = &end_year_val;
       rc = cparser_get_uint(&parser->tokens[12], &end_month_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        end_month_ptr = &end_month_val;
       rc = cparser_get_uint(&parser->tokens[13], &end_day_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        end_day_ptr = &end_day_val;
       rc = cparser_get_uint(&parser->tokens[14], &end_hour_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        end_hour_ptr = &end_hour_val;
       rc = cparser_get_uint(&parser->tokens[15], &end_min_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        end_min_ptr = &end_min_val;
       rc = cparser_get_uint(&parser->tokens[16], &end_sec_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        end_sec_ptr = &end_sec_val;
    };
    cparser_cmd_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min_end_sec(&parser->context,
        start_year_ptr,
        start_month_ptr,
        start_day_ptr,
        start_hour_ptr,
        start_min_ptr,
        start_sec_ptr,
        end_year_ptr,
        end_month_ptr,
        end_day_ptr,
        end_hour_ptr,
        end_min_ptr,
        end_sec_ptr);
    return CPARSER_OK;
}

cparser_result_t
cparser_glue_show_tamper_log_tamper_name (cparser_t *parser)
{
    char *name_val;
    char **name_ptr = NULL;
    cparser_result_t rc;

    if (parser->mode == CPARSER_MODE_CONFIG) {;
       rc = cparser_get_string(&parser->tokens[3], &name_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        name_ptr = &name_val;
    };
    cparser_cmd_show_tamper_log_tamper_name(&parser->context,
        name_ptr);
    return CPARSER_OK;
}

cparser_result_t
cparser_glue_show_tamper_log_tamper_name_recent_hours (cparser_t *parser)
{
    char *name_val;
    char **name_ptr = NULL;
    uint32_t hours_val;
    uint32_t *hours_ptr = NULL;
    cparser_result_t rc;

    if (parser->mode == CPARSER_MODE_CONFIG) {;
       rc = cparser_get_string(&parser->tokens[3], &name_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        name_ptr = &name_val;
       rc = cparser_get_uint(&parser->tokens[5], &hours_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        hours_ptr = &hours_val;
    };
    cparser_cmd_show_tamper_log_tamper_name_recent_hours(&parser->context,
        name_ptr,
        hours_ptr);
    return CPARSER_OK;
}

cparser_result_t
cparser_glue_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min_end_sec (cparser_t *parser)
{
    char *name_val;
    char **name_ptr = NULL;
    uint32_t start_year_val;
    uint32_t *start_year_ptr = NULL;
    uint32_t start_month_val;
    uint32_t *start_month_ptr = NULL;
    uint32_t start_day_val;
    uint32_t *start_day_ptr = NULL;
    uint32_t start_hour_val;
    uint32_t *start_hour_ptr = NULL;
    uint32_t start_min_val;
    uint32_t *start_min_ptr = NULL;
    uint32_t start_sec_val;
    uint32_t *start_sec_ptr = NULL;
    uint32_t end_year_val;
    uint32_t *end_year_ptr = NULL;
    uint32_t end_month_val;
    uint32_t *end_month_ptr = NULL;
    uint32_t end_day_val;
    uint32_t *end_day_ptr = NULL;
    uint32_t end_hour_val;
    uint32_t *end_hour_ptr = NULL;
    uint32_t end_min_val;
    uint32_t *end_min_ptr = NULL;
    uint32_t end_sec_val;
    uint32_t *end_sec_ptr = NULL;
    cparser_result_t rc;

    if (parser->mode == CPARSER_MODE_CONFIG) {;
       rc = cparser_get_string(&parser->tokens[3], &name_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        name_ptr = &name_val;
       rc = cparser_get_uint(&parser->tokens[5], &start_year_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        start_year_ptr = &start_year_val;
       rc = cparser_get_uint(&parser->tokens[6], &start_month_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        start_month_ptr = &start_month_val;
       rc = cparser_get_uint(&parser->tokens[7], &start_day_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        start_day_ptr = &start_day_val;
       rc = cparser_get_uint(&parser->tokens[8], &start_hour_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        start_hour_ptr = &start_hour_val;
       rc = cparser_get_uint(&parser->tokens[9], &start_min_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        start_min_ptr = &start_min_val;
       rc = cparser_get_uint(&parser->tokens[10], &start_sec_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        start_sec_ptr = &start_sec_val;
       rc = cparser_get_uint(&parser->tokens[12], &end_year_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        end_year_ptr = &end_year_val;
       rc = cparser_get_uint(&parser->tokens[13], &end_month_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        end_month_ptr = &end_month_val;
       rc = cparser_get_uint(&parser->tokens[14], &end_day_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        end_day_ptr = &end_day_val;
       rc = cparser_get_uint(&parser->tokens[15], &end_hour_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        end_hour_ptr = &end_hour_val;
       rc = cparser_get_uint(&parser->tokens[16], &end_min_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        end_min_ptr = &end_min_val;
       rc = cparser_get_uint(&parser->tokens[17], &end_sec_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        end_sec_ptr = &end_sec_val;
    };
    cparser_cmd_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min_end_sec(&parser->context,
        name_ptr,
        start_year_ptr,
        start_month_ptr,
        start_day_ptr,
        start_hour_ptr,
        start_min_ptr,
        start_sec_ptr,
        end_year_ptr,
        end_month_ptr,
        end_day_ptr,
        end_hour_ptr,
        end_min_ptr,
        end_sec_ptr);
    return CPARSER_OK;
}

cparser_result_t
cparser_glue_show_admin_log (cparser_t *parser)
{
    if (parser->mode == CPARSER_MODE_CONFIG) {;
    };
    cparser_cmd_show_admin_log(&parser->context);
    return CPARSER_OK;
}

cparser_result_t
cparser_glue_show_admin_log_recent_hours (cparser_t *parser)
{
    uint32_t hours_val;
    uint32_t *hours_ptr = NULL;
    cparser_result_t rc;

    if (parser->mode == CPARSER_MODE_CONFIG) {;
       rc = cparser_get_uint(&parser->tokens[3], &hours_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        hours_ptr = &hours_val;
    };
    cparser_cmd_show_admin_log_recent_hours(&parser->context,
        hours_ptr);
    return CPARSER_OK;
}

cparser_result_t
cparser_glue_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min_end_sec (cparser_t *parser)
{
    uint32_t start_year_val;
    uint32_t *start_year_ptr = NULL;
    uint32_t start_month_val;
    uint32_t *start_month_ptr = NULL;
    uint32_t start_day_val;
    uint32_t *start_day_ptr = NULL;
    uint32_t start_hour_val;
    uint32_t *start_hour_ptr = NULL;
    uint32_t start_min_val;
    uint32_t *start_min_ptr = NULL;
    uint32_t start_sec_val;
    uint32_t *start_sec_ptr = NULL;
    uint32_t end_year_val;
    uint32_t *end_year_ptr = NULL;
    uint32_t end_month_val;
    uint32_t *end_month_ptr = NULL;
    uint32_t end_day_val;
    uint32_t *end_day_ptr = NULL;
    uint32_t end_hour_val;
    uint32_t *end_hour_ptr = NULL;
    uint32_t end_min_val;
    uint32_t *end_min_ptr = NULL;
    uint32_t end_sec_val;
    uint32_t *end_sec_ptr = NULL;
    cparser_result_t rc;

    if (parser->mode == CPARSER_MODE_CONFIG) {;
       rc = cparser_get_uint(&parser->tokens[3], &start_year_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        start_year_ptr = &start_year_val;
       rc = cparser_get_uint(&parser->tokens[4], &start_month_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        start_month_ptr = &start_month_val;
       rc = cparser_get_uint(&parser->tokens[5], &start_day_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        start_day_ptr = &start_day_val;
       rc = cparser_get_uint(&parser->tokens[6], &start_hour_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        start_hour_ptr = &start_hour_val;
       rc = cparser_get_uint(&parser->tokens[7], &start_min_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        start_min_ptr = &start_min_val;
       rc = cparser_get_uint(&parser->tokens[8], &start_sec_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        start_sec_ptr = &start_sec_val;
       rc = cparser_get_uint(&parser->tokens[10], &end_year_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        end_year_ptr = &end_year_val;
       rc = cparser_get_uint(&parser->tokens[11], &end_month_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        end_month_ptr = &end_month_val;
       rc = cparser_get_uint(&parser->tokens[12], &end_day_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        end_day_ptr = &end_day_val;
       rc = cparser_get_uint(&parser->tokens[13], &end_hour_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        end_hour_ptr = &end_hour_val;
       rc = cparser_get_uint(&parser->tokens[14], &end_min_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        end_min_ptr = &end_min_val;
       rc = cparser_get_uint(&parser->tokens[15], &end_sec_val);
        if (CPARSER_OK != rc) {
            cparser_printf(&parser->context, "Invalid value!\n");
            return CPARSER_OK;
        }
        end_sec_ptr = &end_sec_val;
    };
    cparser_cmd_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min_end_sec(&parser->context,
        start_year_ptr,
        start_month_ptr,
        start_day_ptr,
        start_hour_ptr,
        start_min_ptr,
        start_sec_ptr,
        end_year_ptr,
        end_month_ptr,
        end_day_ptr,
        end_hour_ptr,
        end_min_ptr,
        end_sec_ptr);
    return CPARSER_OK;
}

cparser_result_t
cparser_glue_show_running_config (cparser_t *parser)
{
    if (parser->mode == CPARSER_MODE_CONFIG) {;
    };
    cparser_cmd_show_running_config(&parser->context);
    return CPARSER_OK;
}

cparser_node_t cparser_node_show_running_config_eol = {
    CPARSER_NODE_END,
    0,
    cparser_glue_show_running_config,
    "show all configure information",
    NULL,
    NULL
};

cparser_node_t cparser_node_show_running_config = {
    CPARSER_NODE_KEYWORD,
    0,
    "running-config",
    NULL,
    NULL,
    &cparser_node_show_running_config_eol
};

cparser_node_t cparser_node_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min_end_sec_eol = {
    CPARSER_NODE_END,
    0,
    cparser_glue_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min_end_sec,
    "show specified time logs",
    NULL,
    NULL
};

cparser_node_t cparser_node_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min_end_sec = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:end_sec>",
    NULL,
    NULL,
    &cparser_node_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min_end_sec_eol
};

cparser_node_t cparser_node_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:end_min>",
    NULL,
    NULL,
    &cparser_node_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min_end_sec
};

cparser_node_t cparser_node_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:end_hour>",
    NULL,
    NULL,
    &cparser_node_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min
};

cparser_node_t cparser_node_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:end_day>",
    NULL,
    NULL,
    &cparser_node_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour
};

cparser_node_t cparser_node_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:end_month>",
    NULL,
    NULL,
    &cparser_node_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day
};

cparser_node_t cparser_node_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:end_year>",
    NULL,
    NULL,
    &cparser_node_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month
};

cparser_node_t cparser_node_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time = {
    CPARSER_NODE_KEYWORD,
    0,
    "end-time",
    NULL,
    NULL,
    &cparser_node_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year
};

cparser_node_t cparser_node_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:start_sec>",
    NULL,
    NULL,
    &cparser_node_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time
};

cparser_node_t cparser_node_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:start_min>",
    NULL,
    NULL,
    &cparser_node_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec
};

cparser_node_t cparser_node_show_admin_log_start_time_start_year_start_month_start_day_start_hour = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:start_hour>",
    NULL,
    NULL,
    &cparser_node_show_admin_log_start_time_start_year_start_month_start_day_start_hour_start_min
};

cparser_node_t cparser_node_show_admin_log_start_time_start_year_start_month_start_day = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:start_day>",
    NULL,
    NULL,
    &cparser_node_show_admin_log_start_time_start_year_start_month_start_day_start_hour
};

cparser_node_t cparser_node_show_admin_log_start_time_start_year_start_month = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:start_month>",
    NULL,
    NULL,
    &cparser_node_show_admin_log_start_time_start_year_start_month_start_day
};

cparser_node_t cparser_node_show_admin_log_start_time_start_year = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:start_year>",
    NULL,
    NULL,
    &cparser_node_show_admin_log_start_time_start_year_start_month
};

cparser_node_t cparser_node_show_admin_log_start_time = {
    CPARSER_NODE_KEYWORD,
    0,
    "start-time",
    NULL,
    NULL,
    &cparser_node_show_admin_log_start_time_start_year
};

cparser_node_t cparser_node_show_admin_log_recent_hours_eol = {
    CPARSER_NODE_END,
    0,
    cparser_glue_show_admin_log_recent_hours,
    "show recent hours logs",
    NULL,
    NULL
};

cparser_node_t cparser_node_show_admin_log_recent_hours = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:hours>",
    NULL,
    NULL,
    &cparser_node_show_admin_log_recent_hours_eol
};

cparser_node_t cparser_node_show_admin_log_recent = {
    CPARSER_NODE_KEYWORD,
    0,
    "recent",
    NULL,
    &cparser_node_show_admin_log_start_time,
    &cparser_node_show_admin_log_recent_hours
};

cparser_node_t cparser_node_show_admin_log_eol = {
    CPARSER_NODE_END,
    0,
    cparser_glue_show_admin_log,
    "show all logs",
    &cparser_node_show_admin_log_recent,
    NULL
};

cparser_node_t cparser_node_show_admin_log = {
    CPARSER_NODE_KEYWORD,
    0,
    "admin-log",
    NULL,
    &cparser_node_show_running_config,
    &cparser_node_show_admin_log_eol
};

cparser_node_t cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min_end_sec_eol = {
    CPARSER_NODE_END,
    0,
    cparser_glue_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min_end_sec,
    "show specified time tamper-log of some tamper ",
    NULL,
    NULL
};

cparser_node_t cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min_end_sec = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:end_sec>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min_end_sec_eol
};

cparser_node_t cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:end_min>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min_end_sec
};

cparser_node_t cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:end_hour>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min
};

cparser_node_t cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:end_day>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour
};

cparser_node_t cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:end_month>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day
};

cparser_node_t cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:end_year>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month
};

cparser_node_t cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time = {
    CPARSER_NODE_KEYWORD,
    0,
    "end-time",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year
};

cparser_node_t cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:start_sec>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time
};

cparser_node_t cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:start_min>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec
};

cparser_node_t cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:start_hour>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour_start_min
};

cparser_node_t cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:start_day>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day_start_hour
};

cparser_node_t cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:start_month>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month_start_day
};

cparser_node_t cparser_node_show_tamper_log_tamper_name_start_time_start_year = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:start_year>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_tamper_name_start_time_start_year_start_month
};

cparser_node_t cparser_node_show_tamper_log_tamper_name_start_time = {
    CPARSER_NODE_KEYWORD,
    0,
    "start-time",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_tamper_name_start_time_start_year
};

cparser_node_t cparser_node_show_tamper_log_tamper_name_recent_hours_eol = {
    CPARSER_NODE_END,
    0,
    cparser_glue_show_tamper_log_tamper_name_recent_hours,
    "show recent hours tamper-log of some tamper",
    NULL,
    NULL
};

cparser_node_t cparser_node_show_tamper_log_tamper_name_recent_hours = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:hours>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_tamper_name_recent_hours_eol
};

cparser_node_t cparser_node_show_tamper_log_tamper_name_recent = {
    CPARSER_NODE_KEYWORD,
    0,
    "recent",
    NULL,
    &cparser_node_show_tamper_log_tamper_name_start_time,
    &cparser_node_show_tamper_log_tamper_name_recent_hours
};

cparser_node_t cparser_node_show_tamper_log_tamper_name_eol = {
    CPARSER_NODE_END,
    0,
    cparser_glue_show_tamper_log_tamper_name,
    "show tamper-log of some tamper",
    &cparser_node_show_tamper_log_tamper_name_recent,
    NULL
};

cparser_node_t cparser_node_show_tamper_log_tamper_name = {
    CPARSER_NODE_STRING,
    0,
    "<STRING:name>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_tamper_name_eol
};

cparser_node_t cparser_node_show_tamper_log_tamper = {
    CPARSER_NODE_KEYWORD,
    0,
    "tamper",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_tamper_name
};

cparser_node_t cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min_end_sec_eol = {
    CPARSER_NODE_END,
    0,
    cparser_glue_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min_end_sec,
    "show specified time all tamper-log ",
    NULL,
    NULL
};

cparser_node_t cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min_end_sec = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:end_sec>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min_end_sec_eol
};

cparser_node_t cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:end_min>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min_end_sec
};

cparser_node_t cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:end_hour>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour_end_min
};

cparser_node_t cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:end_day>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day_end_hour
};

cparser_node_t cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:end_month>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month_end_day
};

cparser_node_t cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:end_year>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year_end_month
};

cparser_node_t cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time = {
    CPARSER_NODE_KEYWORD,
    0,
    "end-time",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time_end_year
};

cparser_node_t cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:start_sec>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec_end_time
};

cparser_node_t cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:start_min>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min_start_sec
};

cparser_node_t cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:start_hour>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour_start_min
};

cparser_node_t cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:start_day>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day_start_hour
};

cparser_node_t cparser_node_show_tamper_log_all_start_time_start_year_start_month = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:start_month>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_all_start_time_start_year_start_month_start_day
};

cparser_node_t cparser_node_show_tamper_log_all_start_time_start_year = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:start_year>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_all_start_time_start_year_start_month
};

cparser_node_t cparser_node_show_tamper_log_all_start_time = {
    CPARSER_NODE_KEYWORD,
    0,
    "start-time",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_all_start_time_start_year
};

cparser_node_t cparser_node_show_tamper_log_all_recent_hours_eol = {
    CPARSER_NODE_END,
    0,
    cparser_glue_show_tamper_log_all_recent_hours,
    "show all tamper-log",
    NULL,
    NULL
};

cparser_node_t cparser_node_show_tamper_log_all_recent_hours = {
    CPARSER_NODE_UINT,
    0,
    "<UINT:hours>",
    NULL,
    NULL,
    &cparser_node_show_tamper_log_all_recent_hours_eol
};

cparser_node_t cparser_node_show_tamper_log_all_recent = {
    CPARSER_NODE_KEYWORD,
    0,
    "recent",
    NULL,
    &cparser_node_show_tamper_log_all_start_time,
    &cparser_node_show_tamper_log_all_recent_hours
};

cparser_node_t cparser_node_show_tamper_log_all_eol = {
    CPARSER_NODE_END,
    0,
    cparser_glue_show_tamper_log_all,
    "show all recent hours tamper-log",
    &cparser_node_show_tamper_log_all_recent,
    NULL
};

cparser_node_t cparser_node_show_tamper_log_all = {
    CPARSER_NODE_KEYWORD,
    0,
    "all",
    NULL,
    &cparser_node_show_tamper_log_tamper,
    &cparser_node_show_tamper_log_all_eol
};

cparser_node_t cparser_node_show_tamper_log = {
    CPARSER_NODE_KEYWORD,
    0,
    "tamper-log",
    NULL,
    &cparser_node_show_admin_log,
    &cparser_node_show_tamper_log_all
};

cparser_node_t cparser_node_show_tamper_disk_eol = {
    CPARSER_NODE_END,
    0,
    cparser_glue_show_tamper_disk,
    "show use status of disk of tamper ",
    NULL,
    NULL
};

cparser_node_t cparser_node_show_tamper_disk = {
    CPARSER_NODE_KEYWORD,
    0,
    "tamper-disk",
    NULL,
    &cparser_node_show_tamper_log,
    &cparser_node_show_tamper_disk_eol
};

cparser_node_t cparser_node_show_tamper_tampername_eol = {
    CPARSER_NODE_END,
    0,
    cparser_glue_show_tamper_tampername,
    "show tamper configure ",
    NULL,
    NULL
};

cparser_node_t cparser_node_show_tamper_tampername = {
    CPARSER_NODE_STRING,
    CPARSER_NODE_FLAGS_OPT_START | CPARSER_NODE_FLAGS_OPT_END,
    "<STRING:tampername>",
    NULL,
    NULL,
    &cparser_node_show_tamper_tampername_eol
};

cparser_node_t cparser_node_show_tamper_eol = {
    CPARSER_NODE_END,
    CPARSER_NODE_FLAGS_OPT_PARTIAL,
    cparser_glue_show_tamper_tampername,
    NULL,
    &cparser_node_show_tamper_tampername,
    NULL
};

cparser_node_t cparser_node_show_tamper = {
    CPARSER_NODE_KEYWORD,
    0,
    "tamper",
    NULL,
    &cparser_node_show_tamper_disk,
    &cparser_node_show_tamper_eol
};

cparser_node_t cparser_node_show = {
    CPARSER_NODE_KEYWORD,
    0,
    "show",
    NULL,
    NULL,
    &cparser_node_show_tamper
};

cparser_node_t cparser_show_root = {
    CPARSER_NODE_ROOT,
    0,
    NULL,
    "Root node of the parser show tree",
    NULL,
    &cparser_node_show
};

