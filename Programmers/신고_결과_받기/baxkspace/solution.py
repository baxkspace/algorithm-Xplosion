def solution(id_list, report, k):
    report_dict = dict()
    new_report = []
    report_num = dict()
    answer_dict = dict()
    answer = []

    for item in id_list:
        report_dict[item] = []
        report_num[item] = 0
        answer_dict[item] = 0

    for item in report:
        new_report.append(item.split(" "))

    length = len(new_report)
    for i in range(0, length):
        if new_report[i][1] not in report_dict[new_report[i][0]]:
            report_dict[new_report[i][0]].append(new_report[i][1])
            report_num[new_report[i][1]] += 1

    for item in report_num:
        if report_num[item] >= k:
            for key in report_dict:
                if item in report_dict[key]:
                    answer_dict[key] += 1

    for item in answer_dict:
        answer.append(answer_dict[item])

    return answer


